//
// Created by haofeng on 3/29/20.
//
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct edge{
    int v1, v2, weight;
};
bool cmp( edge& e1,edge& e2){
    return e1.weight < e2.weight;
}
vector<edge> graph;
int N,M;
int member[50010];
int ranks[100010];
//看清数据范围，一个数据范围改了三次
void init(int N){
    for(int i=0;i<N;i++){
        member[i]=i;
        ranks[i]=1;
    }
}
int find(int x){
    if(member[x]==x)return x;
    return member[x]=find(member[x]);
}
void unite(int x,int y){
    x=find(x);y=find(y);
    if(x!=y){
        if(ranks[x]>ranks[y]){swap(x,y);}//y更大
        member[x]=y;ranks[y]+=ranks[x];ranks[x]=ranks[y];
    }
}
int kruskal(int n){
    int e_num=0;
    int MAX=0;
    for(int i=0;i<graph.size();i++){
        if(find(graph[i].v1)!=find(graph[i].v2)){
            unite(graph[i].v1,graph[i].v2);
            MAX=max(MAX,graph[i].weight);
        }
        if(e_num==n){
            break;
        }
    }
    return MAX;
}
int main(){
    cin>>N>>M;
    int root;cin>>root;
    for(int i=0;i<M;i++){
        int v,u,temp;cin>>v>>u>>temp;
        edge e;e.v1=v;e.v2=u;e.weight=temp;
        graph.push_back(e);
    }
    init(N);
    sort(graph.begin(),graph.end(),cmp);
    cout<<kruskal(N)<<endl;

}
 */