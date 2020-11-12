//
// Created by haofeng on 4/13/20.
//
/*
#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
priority_queue<int> heap;
int N,M;
int indegree[510];
int head[510], tot;
struct Edge{
    int in, out,next;
}e[250010];
void init(){
    tot=0;
    for(int i=0;i<510;++i){head[i]=-1;indegree[i]=0;}
}
void addedge(int v,int u){
    tot++;
    e[tot].in=v;
    e[tot].out=u;
    e[tot].next=head[v];
    head[v]=tot;
    indegree[u]++;
}
void toposort(){
    while (!heap.empty())heap.pop();
    for(int i=1;i<=N;++i){
        if(indegree[i]==0)heap.push(-i);
    }
    vector<int> ans;
    while (!heap.empty()){
        int u=-heap.top();heap.pop();
        ans.push_back(u);//存起来，按字典序
        for(int i=head[u];i!=-1;i=e[i].next){
            indegree[e[i].out]--;
            if(indegree[e[i].out]==0)heap.push(-e[i].out);//之前错的地方是按一层层来，实际不是这样
        }
    }
    for(int i=0;i<N-1;++i)cout<<ans[i]<<" ";
    cout<<ans[N-1]<<endl;

}
int main(){
    int V,U;
    while (cin>>N>>M){
        init();
        for(int i=0;i<M;++i){
            scanf("%d %d",&V,&U);
            addedge(V,U);
        }
        toposort();
    }
}
*/