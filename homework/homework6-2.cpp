//
// Created by haofeng on 3/28/20.
//
#include <iostream>
#include <algorithm>
using namespace std;
int member[50010];
int ranks[50010];
int N=0;int M=0;//n student m group
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
int main(){
    while (cin>>N>>M){
        if(N==M&&N==0){break;}
        init(N);
        for(int i=0;i<M;i++){
            int num,root,temp;cin>>num>>root;
            for(int j=0;j<num-1;j++){
                cin>>temp;
                unite(root,temp);
            }
        }
        int g=find(0);
        //这里要find,不然可能找不到根节点
        int total=0;
        cout<<ranks[g]<<endl;
    }
}