//
// Created by haofeng on 5/26/20.
//
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

//A[i] = 2 * A[i-1] + C[i-1]
//B[i] = 2 * B[i-1] + C[i-1]
//C[i] = 2 * A[i-1] + 2 * B[i-1] + 2 * C[i-1]

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
                    res.xy[i][j] = (res.xy[i][j] + xy[i][k]*M.xy[k][j]);
                }
            }
        }
        return res;
    }
};