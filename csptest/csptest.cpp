//
// Created by 冯灏 on 4/11/20.
//
/*
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
long long self_nines[12];//记录纯9组成的数列的长度
long long total_nines[12];//记录纯9组成的项之前总共的长度
long long weishu(long long k){
    long long weishu=1;
    while (k>=10){
        k/=10;
        weishu++;
    }
    return weishu;
}
long long zhishu(long long wei){
    long long pownum=1;
    for(int i=1;i<wei;i++){
        pownum*=10;
    }
    return pownum;
}
void getnines(){
    //提前计算出self_nines和total_nines
    self_nines[0]=0;
    for(long long i=1;i<=11;++i){
        long long pownum=zhishu(i);
        self_nines[i]=self_nines[i-1]+i*(9*pownum);
    }
    total_nines[0]=0;
    for(long long i=1;i<=11;++i){
        long long pownum=zhishu(i);
        total_nines[i]=total_nines[i-1]+(9*pownum)*(self_nines[i-1]+self_nines[i]+i)/2;
    }
}
long long getself(long long k){
    //求在对应的小队列中对应的哪个数
    long long wei=weishu(k);
    long long pownum=zhishu(wei);
    return (self_nines[wei-1]+wei*(k+1-pownum));
}
long long gettotal(long long k){
    //求处于两个总队列之间的位置
    long long wei=weishu(k);
    long long pownum=zhishu(wei);
    return total_nines[wei-1]+((k+1-pownum)*(getself(k)+getself(pownum)))/2;
}

int main(){
    getnines();
    int q;cin>>q;
    while (q>0){
        q--;
        long long k;cin>>k;
        long long left=1,right=1000000000;
        long long middle=(left+right)/2;
        while (left<=right){
            if(k>gettotal(middle)){
                left=middle+1;
            }
            else{
                right=middle-1;
            }
            middle=(left+right)/2;

        }
        k-=gettotal(middle);
        left=1;right=10000000000;
        while (left<= right){
            middle=(left+right)/2;
            if(k>getself(middle)){
                left=middle+1;
            }
            else{
                right=middle-1;
            }
            middle=(left+right)/2;

        }
        k-=getself(middle);
        string str=to_string(middle+1);
        int answer=str[k-1]-'0';
        cout<<answer<<endl;
    }
}
*/