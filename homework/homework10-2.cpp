//
// Created by haofeng on 4/25/20.
//
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
const int MAX=5010;
int n,m;
long long A[MAX];
long long B[MAX];
int LIS[MAX];
int LCS[MAX][MAX]={0};
int LISMAX=0;
void solveLIS(){
    for(int i=1;i<=n;++i)LIS[i]=1;//初始化不能少
    for(int i=1;i<=n;++i)
        for(int j=1;j<i;++j)
            if(A[j]<A[i]){
                LIS[i]=max(LIS[j]+1,LIS[i]);
            }
    for(int i=1;i<=n;++i)
        if(LIS[i]>LISMAX)LISMAX=LIS[i];
}
void solveLCS(){
    memset(LCS,0, sizeof(LCS));
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            if(A[i]==B[j]){
                LCS[i][j]=LCS[i-1][j-1]+1;
            }
            else{
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
            }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;++i)cin>>A[i];
    for(int i=1;i<=m;++i)cin>>B[i];
    solveLCS();
    solveLIS();
    cout<<LISMAX<<" "<<LCS[n][m];
}