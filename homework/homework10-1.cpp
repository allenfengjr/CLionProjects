//
// Created by haofeng on 4/25/20.
//
#include <iostream>
using namespace std;
long long n,m;
long long times=0;

void get2233(long long num,long long twothree,long long t){
    num*=twothree;
    if(num==m){times=t;
        return;}
    if(num>m)return;
    get2233(num,2,t+1);
    get2233(num,3,t+1);
}
int main(){

    cin>>n>>m;
    if(n==m)times=0;
    else{
        if(m%n!=0)times=-1;//直接不能整除
        else{
            if(m%2==0||m%3==0) {
                m /= n;//2,3乘来乘去的结果
                if (m % 2 == 0)get2233(1, 2, 1);
                else get2233(1, 3, 1);
            }
        }
        if(times==0)times=-1;
    }
    cout<<times;
}