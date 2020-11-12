//
// Created by 冯灏 on 3/18/20.
//
/*
#include <iostream>
#include <algorithm>
using namespace std;
int N;
int bin_search(int aim,int *arr){
    int res=0;
    int left=0;int right=N*N-1;int middle=N*N/2;
    //这里固定了，简化操作
    while(left<right){
        if(arr[middle]>=aim){
            //目标在左侧
            right=middle;
            middle=(left+right)/2;
        }
        else{
            left=middle+1;
            middle=(left+right)/2;
        }
    }
    while (middle<N*N&&arr[middle]==aim){middle++;res++;}
    return res;
}
int main(){
    cin>>N;
    int* A=new int[N];
    int* B=new int[N];
    int* C=new int[N];
    int* D=new int[N];
    for(int i=0;i<N;i++){
        cin>>A[i]>>B[i]>>C[i]>>D[i];
    }
    int* sum1=new int[N*N];
    int* sum2=new int[N*N];
    for(int i=0;i<N*N;i++){
        sum1[i]=A[i/N]+B[i%N];
        sum2[i]=C[i/N]+D[i%N];
    }
    sort(sum2,sum2+N*N);
    int RES=0;
    for(int i=0;i<N*N;i++){
        RES+=bin_search(-sum1[i],sum2);
    }
    cout<<RES<<endl;
}
 */