//
// Created by haofeng on 5/29/20.
//
//排列组合的路子太难了
//即通过类似二分的思想,逐位确定是a还是b
//不足：aabxxxx是验证到第三位时确定的,二分的思路是不用特意判断等于,两边夹就可以,但这里如果等于的话,处理比较复杂(写的我自己都乱了QAQ)
//反正只有两位是b,如果位置是x1,x2,我们直接算就完事了
/*
#include <iostream>
using namespace std;
long long T,N,K;
char AB[100010];
long long zuheshu(int n,int c){
    if(c==2)return n*(n-1)/2;
    if(c==1)return n;
    if(c==0)return 1;
}
int main(){
    cin>>T;
    while (T--){
        cin>>N>>K;
        long long total=zuheshu(N,2);
        //正数K就是倒数total-K+1
        int Length=N-1;
        while (total>0){
            total-=Length;
            Length--;
        }
        if(total==0){
            
        }
    }
}
 */