//
// Created by haofeng on 4/17/20.
//
/*
#include <iostream>
#include <string.h>
#include <vector>
#include <stdio.h>
using namespace std;
vector<string> ds[15];//存放所有的目录
void str2dir(string str,int po){
    int n=str.size();
    int begin=-1;
    int nextpo=str.find("/");
    while(nextpo!=string::npos){
        ds[po].push_back(str.substr(begin+1,nextpo-begin-1));
        begin=nextpo;
        nextpo=str.find("/",nextpo+1);//不会出现越界问题
    }
    if(begin!=n)ds[po].push_back(str.substr(begin+1,n-begin-1));
    //for(int i=0;i<ds[po].size();++i)cout<<i<<" : "<<ds[po][i]<<" ";
}
int justfind(int pos,int indexx){
    //找到前一个不为空的
    for(int i=indexx-1;i>=0;--i){
        if(ds[pos][i]!=""){
            return i;
        }

    }
}
void dir2nor(int pos){
    int n=ds[pos].size();
    for(int i=0;i<n;++i){
        if(ds[pos][i]=="."){
            //当前目录,直接扔掉就好
            ds[pos][i]="";
        }
        if(ds[pos][i]==".."){
            //找到上一个目录,扔掉
            ds[pos][justfind(pos,i)]="";
            ds[pos][i]="";
        }
    }
}
int main() {
    int p;
    cin >> p;
    string currentdir;
    cin>>currentdir;
    getchar();
    for(int i=0;i<p;++i){
        string nowdir;
        getline(cin,nowdir);
        if(nowdir[0]!='/'){
            nowdir=currentdir+"/"+nowdir;
        }
        if(nowdir==""){
            nowdir=currentdir;
        }
        str2dir(nowdir,i);
    }
    for(int i=0;i<p;++i){
        //开始整理
        dir2nor(i);
    }
    for(int i=0;i<p;++i){
        vector<string>::iterator it;
        string out="";
        for(it=ds[i].begin();it!=ds[i].end();it++){
            if((*it)!=""){
                out=out+"/"+(*it);
            }
        }
        if(ds[i].size()==0){out=currentdir;}
        if(out!="")cout<<out<<endl;
        else cout<<"/"<<endl;
    }
}
*/