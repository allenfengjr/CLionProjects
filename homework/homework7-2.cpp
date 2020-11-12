//
// Created by haofeng on 4/2/20.
//
/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <stdio.h>

using namespace std;
int N,S,E,M,K,C=0;
struct edge{
    int v,u,w,next;//c是商业线commerical
    bool operator < (const edge& e)const{
        return this->w>e.w;
        //因为下面是最大堆
    }
}Edges[2010];
int head[510],tot;
int disS[510];
int disE[510];//dijstrala
int preS[510];
int preE[510];
int visit[510];
bool com=false;
priority_queue<edge> heap;

void init(int n){
    tot=0;com=false;
    for(int i=0;i<=n;i++){head[i]=-1;preS[i]=preE[i]=0;disE[i]=disS[i]=99999999;visit[i]=0;}
}
void addedge(int v,int u,int w){
    tot++;
    Edges[tot].v=v;
    Edges[tot].u=u;
    Edges[tot].w=w;
    Edges[tot].next=head[v];
    head[v]=tot;
}
void dijkstra(int s,int pre[],int dis[]){
    while(!heap.empty())heap.pop();
    for(int i=0;i<=N;i++){
        visit[i]=0;
    }
    dis[s]=0;
    pre[s]=-1;
    heap.push({s,s,0,-1});
    while(!heap.empty()){
        int v=heap.top().v;
        heap.pop();
        if(visit[v])continue;//剪枝吧，不做也没事
        visit[v]=1;
        for(int i=head[v];i!=-1;i=Edges[i].next){
            int w=Edges[i].w;
            if(dis[Edges[i].u]>dis[v]+w){
                dis[Edges[i].u]=dis[v]+w;
                pre[Edges[i].u]=v;
                heap.push({Edges[i].u,s,dis[Edges[i].u],0});
            }
        }
    }

}
void output(int v,int u){
    stack<int> st;
    bool eq=v==u;
    while (preS[v]!=-1){//留S
        st.push(v);
        v=preS[v];
    }
    cout<<S;
    while (!st.empty()){
        printf(" %d",st.top());
        st.pop();
    }
    while (!eq&&preE[u]!=-1){//留E
        printf(" %d",u);
        u=preE[u];
    }
    if(!eq)printf(" %d\n",E);
    else cout<<endl;
}
int main(){
    int cishu=0;
    while (cin>>N>>S>>E){
        init(N);
        cin>>M;
        for(int i=1;i<=M;i++){
            int x,y,z;
            scanf("%d %d %d",&x,&y,&z);
            addedge(x,y,z);
            addedge(y,x,z);
        }
        dijkstra(S,preS,disS);
        dijkstra(E,preE,disE);
        cin>>K;
        int v=-1,u=-1,MIN=disS[E];
        int min_path;
        for(int i=1;i<=K;i++){
            int x,y,z;
            scanf("%d %d %d",&x,&y,&z);
            min_path=disS[x]+disE[y]+z;
            if(MIN>min_path){
                MIN=min_path;
                v=x;u=y;
            }
            swap(x,y);//判断两次
            min_path=disS[x]+disE[y]+z;
            if(MIN>min_path){
                MIN=min_path;
                v=x;u=y;
            }
        }
        if(cishu>0)cout<<endl;
        if(v==-1){
            output(E,E);
            cout<<"Ticket Not Used"<<endl;
        }
        else{
            output(v,u);
            cout<<v<<endl;
        }
        cout<<MIN<<endl;
        cishu++;
    }
}
 */