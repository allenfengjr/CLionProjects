//
// Created by haofeng on 5/15/20.
//
/*
#include <iostream>
#include <algorithm>
using namespace std;
int num[100010][11];
int f[100010][11];
int M,N;
//每一步都是先移动，再接🐱
//理解错题意了,不是接附近三个位置的猫,是这三个位置选一个
//f[i][j]表示j时刻在i位置能接到的最多
//f[i][j]=max{f[i-1][j-1],f[i][j-1],f[i+1][j-1]}
void solve() {
    for (int i = 0; i <=N ; ++i) {
        for (int j = 0; j < 11; ++j) {
            f[i][j]=-1000000;
        }
    }
    f[0][5]=0;
    for (int i = 1; i <= N; ++i) {
        f[i][0]=max(f[i-1][0],f[i-1][1])+num[i][0];
        for (int j = 1; j <10 ; ++j) {
            f[i][j]=max(f[i-1][j-1],max(f[i-1][j],f[i-1][j+1]))+num[i][j];
        }
        f[i][10]=max(f[i-1][9],f[i-1][10])+num[i][10];
    }
    int res=-9999;
    for (int i = 0; i <11 ; ++i) {
        res=max(res,f[N][i]);
    }
    cout<<res<<endl;
}
int main(){
    while (cin>>M){
        if(M==0)break;
        N=-999;
        for (int i = 0; i < 100010; ++i) {
            for (int j = 0; j <11 ; ++j) {
                num[i][j]=0;
            }
        }
        for (int i = 0; i < M; ++i) {
            int a,b;
            cin>>a>>b;
            num[b][a]++;//第b秒落在a点
            N=max(b,N);
        }
        solve();
    }
}
*/