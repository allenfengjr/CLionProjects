//
// Created by haofeng on 5/19/20.
//
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int N,K;
int dp[200010];
int A[200010];
void solve(){
    
}
int main(){
    int t = 100;//t 应该多少我也不知道了
    while (t--){
        cin>>N>>K;
        for (int i = 1; i <=N ; ++i) {
            cin>>A[i];
        }
        for (int i = 1; i <N ; ++i) {
            A[i+N]=A[i];
        }
    }
}