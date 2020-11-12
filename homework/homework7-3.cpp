//
// Created by haofeng on 4/5/20.
//
/*
#include <iostream>
#include <queue>
#include <stdio.h>
#include <math.h>
using namespace std;
struct edge{
    int v,u,w,next;
};
int T,N,M,Q,tot=0;
edge Es[100010];
int head[210];
int a[210];
int inq[210];
int dis[210];
int vis_time[210];
int vis[210];
void init(int n){
    tot=0;
    for(int i=1;i<=n;i++){head[i]=-1;vis[i]=0;}
}
void addedge(int v,int u,int w){
    tot++;
    Es[tot].v=v;
    Es[tot].u=u;
    Es[tot].w=w;
    Es[tot].next=head[v];
    head[v]=tot;

}
void DFS(int s){

    for(int i=head[s];i!=-1;i=Es[i].next)
        if(vis[Es[i].u]==0) {
            vis[Es[i].u] = 1;
            DFS(Es[i].u);
        }
}

void SPFA_Bellman_Ford(int s){
    //计算从s出发到其他点的距离
    for(int i=1;i<=N;i++){dis[i]=99999999;vis_time[i]=0;vis_time[i]=0;inq[i]=0;}
    dis[s]=0;inq[s]=1;
    queue<int> q;q.push(s);
    while (!q.empty()){
        int v=q.front();
        q.pop();
        inq[v]=0;
        for(int i=head[v];i!=-1;i=Es[i].next){
            edge e=Es[i];
            if(dis[e.u]>dis[e.v]+e.w){
                vis_time[e.u]=vis_time[e.v]+1;
                if(vis_time[e.u]>=N){
                   DFS(e.u);inq[e.u]=1;
                }
                dis[e.u]=dis[e.v]+e.w;
                if(!inq[e.u]){
                    q.push(e.u);
                    inq[e.u]=1;
                }
            }
        }
    }
}

int main(){
    cin>>T;int t=0;
    while (t<T){
        t++;cin>>N;
        cout<<"Case "<<t<<":"<<endl;
        int v,u;
        init(N);
        for(int i=1;i<=N;i++){
            scanf("%d",&a[i]);
        }
        cin>>M;
        for(int i=0;i<M;i++){
            scanf("%d %d",&v,&u);
            int w=pow(a[u]-a[v],3);
            addedge(v,u,w);
        }
        SPFA_Bellman_Ford(1);
        cin>>Q;
        for(int j=0;j<Q;j++) {
            int i=0;scanf("%d",&i);
            if (vis[i]==1|| dis[i] == 99999999||dis[i]<3) {
                printf("%s\n", "?");
            } else{
                printf("%d\n",dis[i]);
            }
        }

    }
}
 */