//
// Created by haofeng on 6/5/20.
//
//id和label应该没有重复的
//m,n都很小,说明暴力即可完成==>wdnmd直接全来一遍呗,反正也是要全部的
/*
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
int N,M;
int cnt=1;
vector<string> anc;
vector<string> req;
vector<int> ans;
struct node{
    string label;//不敏感,转化成小写
    string id;//敏感,用原本的,#作为开头
    int cengji=0;//不记录父节点,因为有很好的方法去找,就是直接找上一个层级低的
};
node NODES[110];
void toLower(string &str){
    for(int i=0;i<str.size();i++){
        if(isalpha(str[i]))str[i]=tolower(str[i]);
    }
}
bool canMatch(int x){
    int t=NODES[x].cengji,q=req.size()-2;   //t当前级别 q为req下标
    for(int j=x-1;j>=0;j--){ //向上
        if(NODES[j].cengji==t-1){//满足父亲
            if(req[q][0]!='#'&&req[q]==NODES[j].label)
                q--;   //标签配对
            else if(req[q][0]=='#'&&req[q]==NODES[j].id)
                q--;     //id配对
            t=NODES[j].cengji;   //更新级别
            if(q<0) return true;    //所有级别都满足
        }
    }
    return false;
}
void inputnode(string str){
    int lastdot=str.find_last_of('.');
    int blank=str.find_first_of('#');//如果没有找到这个数会大得离谱
    NODES[cnt].cengji=(lastdot+1)/2;
    if(blank==-1) {
        NODES[cnt].label=str.substr(lastdot+1,str.size());
        NODES[cnt].id="";
    }
    else{
        NODES[cnt].label=str.substr(lastdot+1,blank-lastdot-2);
        NODES[cnt].id=str.substr(blank,str.size());
    }
    toLower(NODES[cnt].label);
    cnt++;
}
int main(){
    cnt=1;
    string s;
    cin>>N>>M;
    getchar();
    for (int i = 0; i < N ; ++i) {
        getline(cin,s);
        inputnode(s);
    }
    for (int i = 0; i < M; ++i) {
        getline(cin,s);
        stringstream ss;ss<<s;
        string t;
        while(ss>>t){
            if(t[0]!='#')toLower(t);
            req.push_back(t);
        }
        int si=req.size();
        for (int j = 1; j <=N ; ++j) {
            if(req[si-1][0]!='#'&&req[si-1]==NODES[j].label||req[si-1][0]=='#'&&req[si-1]==NODES[j].id) {
                if (req.size() == 1){
                    ans.push_back(j);
                }
                else if (canMatch(j)) {
                    ans.push_back(j);
                }
            }
        }
        req.clear();
        cout<<ans.size();
        for (int k = 0; k <ans.size() ; ++k) {
            cout<<" "<<ans[k];
        }
        cout<<endl;
        ans.clear();
    }

}
 */