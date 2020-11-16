//
// Created by haofeng on 3/21/20.
//
//差分题，对区间内每个点改变，铁定不行(其实这道题的范围感觉行...)
//TMD long都不够用,long long都用上了，这题暴力肯定不行...
#include <iostream>
using namespace std;
int N,Q;
long long arr[1000000];
long long  diff_equ[1000000];
int main(){
    ios::sync_with_stdio(false);
    cin>>N>>Q;
    for(int i=1;i<=N;i++)cin>>arr[i];
    for(int i=1;i<=N;i++)diff_equ[i]=arr[i]-arr[i-1];
    //差分方程的形式
    for(int i=0;i<Q;i++){
        long long l,r,c;
        cin>>l>>r>>c;
        diff_equ[l]+=c;
        diff_equ[r+1]-=c;
    }
    for(int i=1;i<=N;i++)arr[i]=arr[i-1]+diff_equ[i];
    for(int i=1;i<=N;i++)cout<<arr[i]<<" ";
}