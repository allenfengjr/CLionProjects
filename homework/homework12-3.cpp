//
// Created by haofeng on 5/14/20.
//
/*
#include <iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;
int M,N;
int a[1000010];
int dp[1000010];
int _dp[1000010];//max{dp[i-1][k]|i-1<=k<=j-1},k=j-1时与dp[i][j-1]不同
//dp[i][j]=max(dp[i][j-1]+a[j],dp[i-1][j-1]+a[j])
//dp[i][j]=>必须选a[j]
void solve(){
    for (int i = 0; i <=N ; ++i) {
        dp[i]=0;
        _dp[i]=0;
    }
    int ans;
    for (int i = 1; i <=M ; ++i) {
        ans=-10000000;
        for (int j = i; j <=N ; ++j) {
            dp[j]=max(dp[j-1]+a[j],_dp[j-1]+a[j]);
            _dp[j-1]=ans;//ans由上一个dp[j]决定
            //_dp[j]=max(dp[j],_dp[j]);
            ans=max(dp[j],ans);
        }
    }
    cout<<ans<<endl;

}
int main(){
    while (scanf("%d %d",&M,&N)!=EOF){
        for (int i = 1; i <=N ; ++i) {
            scanf("%d",&a[i]);
        }
        solve();
    }
}
*/