//
// Created by haofeng on 3/28/20.
//
/*
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <iterator>
#include <utility>

using namespace std;
int V1,V2=0;//直径对应的点
int max_depth=0;
bool visit[10010];//DFS用
int thedepth[10010];
void init_clear(){
    for(int i=0;i<10010;i++){
        visit[i]=false;
    }
}
struct edge{
    vector<pair<int,int>> linjie;
    //first vertex,second length
};
struct graph{
    int v_num;
    edge* e_edges;
};
graph TG;
int N;
void DFS(int v,int depth,int times){
    thedepth[v]=max(thedepth[v],depth);
    //更新距离
    if(depth>max_depth){max_depth=depth;if(times==1)V1=v;if(times==2){V2=v;}}//update v1
    if(!TG.e_edges[v].linjie.empty()){
        //又出现了奇怪的情况，看来是迭代器问题
        //并不是迭代器问题，而是max_depth没有回归到0
        vector<pair<int,int>>::iterator it=TG.e_edges[v].linjie.begin();
        while (it!=TG.e_edges[v].linjie.end()){
            if(!visit[(*it).first]){
                visit[(*it).first]= true;
                DFS((*it).first,depth+(*it).second,times);
            }
            it++;
        }
    }
}
int main(){
    while(cin>>N){
        TG.v_num=N;
        TG.e_edges=new edge[N+1];
        for(int i=2;i<=N;i++){
            int temp_len,temp_v;
            scanf("%d %d",&temp_v,&temp_len);
            //两条边
            TG.e_edges[i].linjie.push_back(pair<int,int> (temp_v,temp_len));
            TG.e_edges[temp_v].linjie.push_back(pair<int,int> (i,temp_len));
        }
        V1=V2=0;max_depth=0;init_clear();for(int i=1;i<=N+1;i++){thedepth[i]=0;}
        visit[1]= true;
        DFS(1,0,1);
        max_depth=0;
        init_clear();
        visit[V1]=true;
        DFS(V1,0,2);
        //至此，求完了树的直径V1V2
        for(int i=1;i<=N+1;i++){thedepth[i]=0;}
        init_clear();visit[V1]=true;
        DFS(V1,0,3);
        init_clear();visit[V2]= true;
        DFS(V2,0,3);
        for(int i=1;i<=N;i++){printf("%d\n",thedepth[i]);}
        for(int i=1;i<=10000;i++){thedepth[i]=0;}
    }
}
 */