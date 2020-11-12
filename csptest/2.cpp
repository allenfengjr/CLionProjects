//
// Created by 冯灏 on 3/11/20.
//从后往前推，为奇数则前一天要留券，为偶数则不用留
//
/*
#include <iostream>

using namespace std;
int main(){
    int n;cin>>n;
    int * shengjian=new int [n];
    int * needquan=new int[n];
    for(int i=0;i<n;i++){
        scanf("%d",&shengjian[i]);
        needquan[i]=0;
    }
    for(int j=n-1;j>0;j--){
        if(shengjian[j]%2==1){
            needquan[j-1]=1;
            shengjian[j-1]++;
        }
        else{
            needquan[j-1]=0;
        }
    }
    if(shengjian[0]%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
 */