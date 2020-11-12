//
// Created by haofeng on 5/14/20.
//
/*
#include <iostream>
#include <string>
using namespace std;
//这个英语我是没看懂的...
int dp[101][101];
string s;
bool Pa(int i,int j){
    if(s[i-1]=='('&&s[j-1]==')')return true;
    if(s[i-1]=='['&&s[j-1]==']')return true;
    return false;
}
int main(){
    while (cin>>s){
        if(s=="end")break;
        int n=s.size();
        for (int i = 1; i <=n ; ++i)
            for (int j = 1; j <=n ; ++j)
                dp[i][j]=0;
            //枚举时,想算dp[i][j]需要dp[k+1][j]和dp[i][k],如何得到这两个?
            //顺着计算一遍,但是每次只能是只多计算一个长度,k的取值也比较有限==>拉了
            //从后往前可以求解,因为每次迭代i的时候,区间的右端点逐渐向右,所以k的取值在慢慢变大,
            // 而这些dp[i][k]在本次逐渐求得dp[k+1][j]在之前求的
        for (int i = n; i >=1 ; --i) {
            for (int j = i+1; j <=n ; ++j) {
                if(Pa(i,j))dp[i][j]=dp[i+1][j-1]+2;
                for (int k = i; k < j; ++k) {
                    dp[i][j]=max(dp[i][j],dp[i][k]+dp[k+1][j]);
                }
            }
        }
        cout<<dp[1][n]<<endl;
    }
}
 */