//
// Created by haofeng on 4/1/20.
//
/*
#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;
int N,M,G;
int dis[510][510];//floyd用
void init(int n){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            dis[i][j]=0;
}
void floyd(int n){
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                dis[i][j]=max(dis[i][j],dis[i][k]&dis[k][j]);
                if(dis[i][k]==0)break;//剩下&都是0，没必要继续遍历j，dis[i][j]保持不变即可
            }
}
int main(){
    scanf("%d",&G);
    while (G>0){
        G--;
        scanf("%d %d",&N,&M);
        init(N);
        int u,v;
        for(int i=1;i<=M;i++){
            scanf("%d %d",&u,&v);
            dis[u][v]=1;
        }
        floyd(N);
        int total=0;
        for(int i=1;i<=N;i++){
            for(int j=i+1;j<=N;j++){//遍历上三角
                if(dis[i][j]==0&&dis[j][i]==0)total++;
            }
        }
        cout<<total<<endl;
    }
}
*/