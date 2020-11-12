//
// Created by haofeng on 5/6/20.
//
//0.这个题挺难的......
//1.看数据范围,1e5,O(n^2)是不行的,回文序列无论如何不能在O(n)解决问题
//这个题一定有比较特殊的解法
//数学找规律吧,其实并不好找
//ABABAB 这里面AB,BA不是delicious的,其余都是
//ABBBBB 这里面A开头的都不是
//ABBABB 这里面AB BA ABB不是
//找不是的比较简单A...B  B...A ...全是A或B的就不是
/*
#include <iostream>
#include <vector>
using namespace std;
int main(){
    char AB[300010];
    long long n;cin>>n;
    for (long long i = 1; i <=n ; ++i) cin>>AB[i];
    long long lenA=0,lenB=0;
    long long num=(n*(n-1))/2;
    //init
    char last=AB[1];if(last=='A')lenA++;
    else lenB++;
    for (long long i = 2; i<=n ; ++i) {
        if(AB[i]!=last){
            if(lenA!=0 && lenB!=0){
                //结算之前连续的两块,比如AAAABBBBB,A有m个,B有n个,AB被计算两次
                num-=(lenA+lenB-1);
                if(AB[i] == 'A'){lenA=0;}
                else lenB = 0;
            }
            last = AB[i];
        }
        if(AB[i]=='A')lenA++;
        else lenB++;
    }
    if(lenA!=0&&lenB!=0)num-=(lenA+lenB-1);
    cout<<num<<endl;
}
*/