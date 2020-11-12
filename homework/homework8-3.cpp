//
// Created by haofeng on 4/13/20.
//
/*
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
//注意，点包括0
int T,N,M,cnt,scnt,dfsn[5010],scc[5010],vis[5010];//DFS模拟
vector<int> Graph1[5010],Graph2[5010];
vector<int> ans;//记录答案
vector<int> Graph3[5010];//记录scc子图
vector<int> ansscc;//答案的那些scc
int sum[5010],visscc[5010],indegree[5010],tempmax;
void DFS1(int x){
    //第一遍求前序和后序
    vis[x]=1;
    for(int y:Graph1[x]){//u1s1,原来从来没用过for循环这么写
        if(!vis[y])DFS1(y);
    }
    dfsn[cnt]=x;
    cnt++;
}
void DFS2(int x){
    scc[x]=scnt;
    for(int y:Graph2[x]){
        if(scc[y]==-1){
            DFS2(y);
        }
    }
}
int DFS3(int x){
    visscc[x]=1;int total=sum[x];
    for(auto y:Graph3[x]){
        if(!visscc[y]){
            total+=DFS3(y);
        }
    }
    return total;
}
void cluster(){//缩图
    memset(sum,0, sizeof(sum));
    memset(indegree,0, sizeof(indegree));
    memset(visscc,0, sizeof(visscc));
    for(int i=0;i<N;i++){
        sum[scc[i]]++;
    }
    //先求反图，然后DFS
    for(int i=0;i<N;i++) {
        for (auto y:Graph1[i]) {
            if(scc[y]!=scc[i]){
                //说明是在两个不同的强连通分量之间,i->y,再反图
                Graph3[scc[y]].push_back(scc[i]);
                indegree[scc[i]]=1;//有入度
            }
        }
    }
    for(int i=0;i<scnt;i++)
    {
        sort(Graph3[i].begin(),Graph3[i].end());
        Graph3[i].erase(unique(Graph3[i].begin(),Graph3[i].end()),Graph3[i].end());
    }
    tempmax=0;
    for(int i=0;i<scnt;i++){
        //求出所有的入度为0且大于等于tempmax的点
        if(!visscc[i]&&indegree[i]==0){
            memset(visscc,0, sizeof(visscc));
            int D=DFS3(i);
            if (tempmax==D){
                ansscc.push_back(i);
            }
            else if(tempmax<D){
                tempmax=D;
                ansscc.clear();
                ansscc.push_back(i);
            }
        }
    }
}
void Kosaraju(){
    cnt=scnt=0;
    memset(scc,-1, sizeof(scc));
    memset(vis,0, sizeof(vis));
    for(int i=0;i<N;++i){
        if(!vis[i])DFS1(i);
    }
    for(int i=N-1;i>=0;--i){
        if(scc[dfsn[i]]==-1){DFS2(dfsn[i]);scnt++;}
    }
}
int main(){
    cin>>T;
    for(int k=1;k<=T;k++){
        cin>>N>>M;
        ans.clear();ansscc.clear();
        for(int i=0;i<N;i++)Graph1[i].clear(),Graph2[i].clear(),Graph3[i].clear();//初始图
        int a,b;
        for(int i=0;i<M;i++){
            scanf("%d %d",&a,&b);
            Graph1[a].push_back(b);
            Graph2[b].push_back(a);
        }
        Kosaraju();
        cluster();
        cout<<"Case "<<k<<": "<<tempmax-1<<endl;
        vector<int>::iterator it;
        for(it=ansscc.begin ();it!=ansscc.end ();it++){
            int as=(*it);
            for(int i=0;i<N;i++){
                if(scc[i]==as)ans.push_back(i);
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++)printf("%d ",ans[i]);
        printf("%d\n",ans[ans.size()-1]);
    }
}
*/