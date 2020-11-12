//
// Created by 冯灏 on 3/18/20.
//
/*
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int N;
int bin_search(int aim,int* arr){
    //返回小于aim的数量
    //更新：实在整不会了,得不到数量
    //主要问题：应该找<=,而不是<
    int l=0;int r=N-1;int ans=-1;
    int mid=(l+r)/2;
    while(l<=r){
        if(arr[mid]<aim){
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;
        mid=(l+r)/2;
    }
    return ans;
    //若为-1，则没找到
}
int main(){
    while(cin>>N) {
        int *cat = new int[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &cat[i]);
        }
        sort(cat, cat + N);
        //问题在于如何对p值进行改变，最初的l,r,m都是什么？
        int left = 0;
        int right = cat[N - 1] - cat[0];
        int middle = (left + right) / 2;
        int p = 0;
        int p_m = ((N * (N - 1)) / 2 - 1) / 2;
        //p_m是中位数所要大于的(i,j)数对
        while (left<= right){
            p=0;
            for(int i=0;i<N;i++){
                int bins=bin_search(cat[i]+middle,cat);
                p+=(bins-i);
            }
            if(p<=p_m){
                left=middle+1;middle=(left+right)/2;
            }
            else{
                right=middle-1;middle=(left+right)/2;
            }
        }
        cout<<middle<<endl;

    }
}
 */