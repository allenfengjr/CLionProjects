//
// Created by haofeng on 4/25/20.
//
/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;
const long long N=1e5+10;
long long numbers[N];
long long GETNUM[N];//最大值为x时,总和
long long numsize[N];//每种数有多少个
int main(){
    long long n;cin>>n;
    for (long long i=0;i<n;++i){
        cin>>numbers[i];
    }
    sort(numbers,numbers+n);
    memset(GETNUM,0, sizeof(GETNUM));//初始化
    memset(numsize,0, sizeof(numsize));
    //求得各种数都有多少个
    for(long long i=0;i<n;++i)numsize[numbers[i]]++;
    GETNUM[1]=numsize[1];
    GETNUM[0]=0;
    long long MAXTOTAL=0;
    for(long long i=2;i<=numbers[n-1];++i){
        GETNUM[i]=max(GETNUM[i-2]+i*numsize[i],GETNUM[i-1]);
        MAXTOTAL=max(GETNUM[i],MAXTOTAL);
    }
    cout<<MAXTOTAL;
}
*/