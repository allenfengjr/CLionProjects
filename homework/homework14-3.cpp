//
// Created by haofeng on 5/26/20.
//
//线性递推
/*
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
long long p,k,m;
struct Matrix{
    long long xy[20][20];
    Matrix(){
        memset(xy,0,sizeof(xy));
    }
    Matrix(const Matrix& t){
        memcpy(xy,t.xy,sizeof(xy));
    }
    //我其实不知道为啥要加const,重载有他没他都能跑起来
    Matrix operator*(const Matrix &M)const{
        Matrix res;
        for(int i = 1;i <= 10; i++){
            for(int j = 1;j <= 10; j++){
                for(int k = 1;k <= 10; k++){
                    res.xy[i][j] = (res.xy[i][j] + xy[i][k]*M.xy[k][j])%p;
                    //取模防止溢出,如何证明
                }
            }
        }
        return res;
    }
};
long long dp[20];
long long a[20];
int main(){
    for (int i = 0; i < 10; ++i) {
        dp[i]=i;
    }
    while(cin>>k>>m) {
        if (k < 10) {
            for (int i = 0; i < 10; ++i) {
                cin>>a[i];
            }
            cout<<dp[k]<<endl;
        }
        else {
            p=m;
            Matrix MAT;
            for (int i = 0; i < 9; ++i) {
                cin >> a[i];
                MAT.xy[1][i + 1] = a[i];
                MAT.xy[i + 2][i + 1] = 1;
            }
            cin >> a[9];
            MAT.xy[1][10]=a[9];
            MAT.xy[10][9] = 1;
            Matrix RESMAT;
            for (int i = 0; i < 10; ++i) {
                RESMAT.xy[i + 1][i + 1] = 1;
            }
            k -= 9;//向量有十行
            //快速幂
            while (k) {
                if (k & 1) RESMAT = RESMAT * MAT;
                MAT = MAT * MAT;
                k = k >> 1;
            }
            int dpk = 0;
            int yushu = 0;
            for (int i = 1; i <= 10; ++i) {
                dpk=(dpk+RESMAT.xy[1][i] * dp[10 - i])%m;
            }
            cout<<dpk<<endl;
        }
    }
}
 */