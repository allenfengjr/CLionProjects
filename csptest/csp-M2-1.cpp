//
// Created by haofeng on 4/8/20.
//
/*
#include <iostream>
#include <algorithm>
#include <stdint.h>
using namespace std;
int T,N;
long long num[10010];
int main(){
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        for(int j=1;j<=N;j++){
            scanf("%lld",&num[j]);
        }
        long long group[3];int fill=0;
        for(int j=0;j<3;j++)group[j]=0;
        bool K= true;
        for(int j=1;j<=N;j++){
            if(fill!=3){
                bool cp=false;
                for(int k=0;k<=fill;k++){
                    cp|=(group[k]==num[j]);
                }
                if(!cp){group[fill]=num[j];fill++;}
            }
            else{
                if(num[j]==group[0]||num[j]==group[1]||num[j]==group[2]){
                    continue;
                }
                else{
                    K=false;
                    break;
                }
            }
        }
        sort(group,group+3);
        if(K&&(group[2]-group[1])==(group[1]-group[0])){
            //三个数
            K= true;
        } else K= false;
        if(fill==1||fill==2){
            //只有两个数
            K=true;
        }
        if(K){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
}
*/