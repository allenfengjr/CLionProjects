//
// Created by haofeng on 4/22/20.
//
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <stack>
using namespace std;
string tempCMD;
string tempDIR;
struct Directorys{
    string name;
    map<string,Directorys*> mp;//哈希表,子目录的名称和
    Directorys* parentD;//数组存==>改了,全用指针吧,更面向对象了
    int tsz;//当前目录下
    bool update;//是否遍历过,tree用
    vector<string>* tenDecents ;
    Directorys(string name,Directorys* parentD){
        this->name=name;
        this->parentD=parentD;
        update=false;
        tsz=1;
        tenDecents=new vector<string>;
    };
    void tszc2anc(int cn);
    Directorys* mkdir(string arg);
    Directorys* remkdir(Directorys* subdir);
    Directorys* getChildren(string x);
    Directorys* rm(string arg);
    Directorys* cd(string arg);
    void sz();
    void ls();
    void treeAll(vector<string>* x);
    void firstFive(int n,vector<string>* x);
    void lastFive(int n,vector<string>* x);
    void tree();
};
struct Shell{
    string CMD[7]={"MKDIR","RM","CD","SZ","LS","TREE","UNDO"};//枚举就完事了
    string DIR;
    int CMDTYPE;
    Shell();
    Directorys* dirindex;//当前工作的目录,不得不记录,只保留一个不行
};
Shell::Shell() {
    cin>>tempCMD;
    for (int i = 0;i<7;++i)if (tempCMD== CMD[i])CMDTYPE = i;
    if (CMDTYPE < 3){
        cin>>tempDIR;
        DIR = tempDIR;
    }
}
void Directorys::tszc2anc(int cn) {
    update= false;//每次变化都要更新,5000次,如果这里改变,那么之前的pre,bck都不可靠
    this->tsz+=cn;//如果是减,就是负数
    if(this->parentD!=NULL)
    this->parentD->tszc2anc(cn);
}
Directorys* Directorys::getChildren(string x)
{
    auto pos = mp.find(x);
    if (pos == mp.end())return NULL;
    else
        return pos->second;
}
Directorys* Directorys:: mkdir(string arg){
    auto pos=mp.find(arg);
    if(pos!=mp.end())return NULL;
    Directorys* childDir=new Directorys(arg,this);//建立子目录
    mp[arg]=childDir;
    tszc2anc(1);
    return childDir;
}
Directorys* Directorys::rm(string arg) {
    auto pos=this->mp.find(arg);
    if (pos == mp.end())return NULL;
    tszc2anc(-1*pos->second->tsz);
    Directorys* temptt = pos->second;
    mp.erase(pos);
    return temptt;
}
Directorys* Directorys::cd(string arg) {
    if(arg=="..")return this->parentD;
    else return getChildren(arg);
}
void Directorys::sz() {
    //if(update)默认全更新,不用判断
    printf("%d\n",this->tsz);
}
void Directorys::ls(){
    int s=this->mp.size();
    if(s==0){printf("EMPTY\n");return;}
    auto pos=this->mp.begin();
    if(s<=10) {
        for (pos; pos != this->mp.end(); pos++)
            printf("%s\n", pos->first.c_str());//string不能直接输出...之前都没注意过...
        return;
    }
    //大于十个,前五个
    pos=this->mp.begin();
    for(int i=0;i<5;++i){
        printf("%s\n",pos->first.c_str());
        pos++;
    }
    //后五个
    cout<<"...\n"<<endl;
    pos=this->mp.end();
    for(int i=0;i<5;++i)pos--;
    for(int i=0;i<5;++i){printf("%s\n",pos->first.c_str());pos++;}
    return;
}
void Directorys::treeAll(vector<string>* x){
    x->push_back(name);
    for (auto pos=this->mp.begin();pos!= this->mp.end();pos++)
        pos->second->treeAll(x);
}
void Directorys::tree(){
    if (tsz == 1)printf("EMPTY\n");
    else{
        if (tsz <= 10){
            if (!update){//一开始都是没有遍历更新过的
                tenDecents->clear();
                treeAll(tenDecents);
                update = true;
            }
            int sz = tenDecents->size();
            for (int i = 0; i < sz; i++)printf("%s\n", tenDecents->at(i).c_str());
        }
        else {
            if (!update){
                tenDecents->clear();
                firstFive(5,tenDecents);
                lastFive(5, tenDecents);
                update = true;
            }
            for (int i = 0; i < 5; i++)printf("%s\n", tenDecents->at(i).c_str());
            printf("...\n");
            for (int i = 9; i >= 5; i--)printf("%s\n", tenDecents->at(i).c_str());
            //最后反而是先加进去,但是只能这样做,后序遍历的特点
        }
    }
}
void Directorys::firstFive(int n,vector<string>* x){
    x->push_back(name);
    //先加入
    if (--n == 0)return;
    int size=this->mp.size();
    auto pos=this->mp.begin();
    while(size--){
        int sizet=pos->second->tsz;
        if (sizet>=n){
            pos->second->firstFive(n,x);
            return;}
        else{
            pos->second->firstFive(sizet,x);
            n-=sizet;
        }
        pos++;
    }
}
void Directorys::lastFive(int n, vector<string>* x){
    int size=this->mp.size();
    auto pos=mp.end();
    while (size--){
        pos--;
        int sizet=pos->second->tsz;
        if (sizet>=n){
            pos->second->lastFive(n, x);
            return;}
        else{
            pos->second->lastFive(sizet,x);
            n-=sizet;
        }
    }
    x->push_back(name);//倒着加
}
Directorys* Directorys::remkdir(Directorys *subdir){//恢复rm用,单纯的mkdir做不了
    auto pos = this->mp.find(subdir->name);
    if (pos != mp.end())return NULL;
    else mp[subdir->name] =subdir;
    tszc2anc(subdir->tsz);
    return subdir;
}
void solve(){
    int n;
    scanf("%d", &n);
    Directorys* now = new Directorys("root", NULL);
    stack<Shell*> SHELLS;//记录这一条和上一条
    for (int i=0;i<n;i++){
        Shell* cmd = new Shell();
        //cout<<"cmd: "<<cmd->CMD[cmd->CMDTYPE]<<"  "<<"arg: "<<cmd->DIR<<endl;
        switch (cmd->CMDTYPE){
            case 0:{//mkdir
                cmd->dirindex=now->mkdir(cmd->DIR);
                if (cmd->dirindex==NULL)printf("ERR\n");
                else{
                    printf("OK\n");
                    SHELLS.push(cmd);
                }
                break;
            }
            case 1:{//rm
                cmd->dirindex=now->rm(cmd->DIR);
                if (cmd->dirindex==NULL)printf("ERR\n");
                else{
                    printf("OK\n");
                    SHELLS.push(cmd);
                }
                break; }
            case 2: {//cd
                Directorys*te=now->cd(cmd->DIR);
                if(te == NULL)printf("ERR\n");
                else {
                    printf("OK\n");
                    cmd->dirindex = now;
                    now = te;
                    SHELLS.push(cmd);
                }
                break; }
            case 3:now->sz(); break;
            case 4:now->ls(); break;
            case 5:now->tree(); break;
            case 6: {
                bool judge = false;
                if(!SHELLS.empty()){
                    cmd = SHELLS.top(); SHELLS.pop();
                    switch (cmd->CMDTYPE)
                    {
                        case 0:  //undo mkdir
                            if (now->rm(cmd->dirindex->name) != NULL)judge = true; break;
                        case 1:  //undo rm
                            if (now->remkdir(cmd->dirindex) != NULL)judge = true; break;
                        case 2: //undo cd
                            now = cmd->dirindex; judge = true; break;
                        default:
                            break;
                    }
                }
                if (judge)printf("OK\n"); else printf("ERR\n");
            }
            default:
                break;
        }
    }
}
int main(){
    //cao,前面多了一个shell对象,折腾一晚上
    int T;scanf("%d",&T);
    while (T--){
        solve();
    }
}