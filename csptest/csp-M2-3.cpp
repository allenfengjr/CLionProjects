//
// Created by haofeng on 4/8/20.
//
/*
#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;
//问题：目前第一个不是1是0?
int q;
//位数分为两部分，一部分是本位的，一部分是前些数字的,一部分是这个数字的
long long kself[160000010];//每一个数1-i的序列长度
long long ktot[160000010];//第i个数的序列长度
long long weishu(long long k){
    long long weishu=1;
    while (k>=10){
        k=k/10;
        weishu++;
    }
    return weishu;
}
void self_tot(){
    for(int i=1;i<=160000000;i++){
        kself[i]=0;
        ktot[i]=0;
    }
    kself[1]=1;
    ktot[1]=1;
    for(int i=1;i<160000000;i++){
        kself[i+1]=kself[i]+weishu((long long)i+1);
        ktot[i+1]=ktot[i]+kself[i+1];
    }
}
long long roughly(long long k){
    //有单调性，考虑二分
    long long left=1;long long right=160000000;long long middle=(left+right)/2;
    while (left<=right){
        if(ktot[middle]>=k){
            right=middle-1;
        }
        else{
            left=middle+1;
        }
        middle=(left+right)/2;
        //很难找到k啊,找到ktot[m]<k&&ktot[m+1]>k即可
    }
    return middle;
}
long long detail(long long k){
    long long left=1;long long right=160000000;long long middle=(left+right)/2;
    //找到了这是第i个小序列中的位置，然后对比，看看在k之前的完整的序列是多少==123456789101112比如13位，前面是10的完整序列
    //返回
    while (left<=right){
        if(kself[middle]>=k){
            right=middle-1;
        }
        else{
            left=middle+1;
        }
        middle=(left+right)/2;
    }
    return middle;
}
int main(){
    string xulie="11212312341234512345612345671234567812345678912345678910 1234567891011 12345678910111212345678910111213";
    cout<<xulie.length()<<endl;
    cin>>q;
    self_tot();
    for(int i=1;i<=13;i++){
        cout<<kself[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<q;i++){
        long long ki;
        scanf("%lld",&ki);
        if(ki<=12){
            cout<<xulie[ki-1]<<endl;
        }
        else{
            long long out;
            long long K_rough=roughly(ki);
            long long K_rest=ki-ktot[K_rough];
            cout<<"rough: "<<K_rough<<endl;
            if(K_rest==0){
                //巧了，一个不剩
                out=K_rough%10;
            }
            else{
                long long K_detail=detail(K_rest);
                long long K_final_test=0;
                if(K_detail==0){
                    //刚好处于一个完整序列的最后
                    out=K_detail%10;
                }
                else{
                    //完整序列后那个数字，一定在一个数字内
                    string str=to_string(K_detail);
                    cout<<"detail: "<<K_detail<<endl;
                    out=str[K_detail-1]-'0';
                }
            }
            cout<<out<<endl;
        }
    }
}
*/