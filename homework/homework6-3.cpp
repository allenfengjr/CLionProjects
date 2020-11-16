//
// Created by haofeng on 3/28/20.
//
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
int N;
int member[310];
int ranks[310];
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
    int total=0;
    for(int i=0;i<graph.size();i++){
        if(find(graph[i].v1)!=find(graph[i].v2)){
            unite(graph[i].v1,graph[i].v2);
            total+=graph[i].weight;
        }
        if(e_num==n){
            break;
        }
    }
    return total;
}
int main(){
    cin>>N;
    for(int i=1;i<=N;i++){
        int temp;cin>>temp;
        edge e;e.v1=0;e.v2=i;e.weight=temp;
        graph.push_back(e);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int temp;cin>>temp;
            if(j<i){
                edge e;e.v1=i+1;e.v2=j+1;e.weight=temp;
                graph.push_back(e);
            }
        }
    }
    sort(graph.begin(),graph.end(),cmp);
    init(N+1);
    cout<<kruskal(N+1)<<endl;
}