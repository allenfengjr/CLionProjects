//
// Created by haofeng on 4/29/20.
//
/*
#include <iostream>
using namespace std;
int n;
int N[20][20];
int M[20][20];
int HOPE[20][20];
bool same(int m0n){
    if(m0n==0) {//用n判断
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (N[i][j] != HOPE[i][j]) {
                    return false;
                }
            }
        }
    } else{//用m判断
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (M[i][j] != HOPE[i][j]) {
                    return false;
                }
            }
        }
    }
    return true;
}
void turn(int n2m){
    if (n2m==0) {//n2m
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                M[j][n-1-i] = N[i][j];
            }
        }
    }
    else{//m2n
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                N[j][n-1-i] = M[i][j];
            }
        }
    }
}
int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>N[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>HOPE[i][j];
        }
    }
    if(same(0)){//不转,n判断
        cout<<0<<endl;
    } else{
        turn(0);//n2m,mj
        if(same(1)){
            cout<<1<<endl;
        }
        else{
            turn(1);//m2n,nj
            if (same(0)){
                cout<<2<<endl;
            } else{
                turn(0);//n2m,mj
                if(same(1)){
                    cout<<3<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
        }
    }
}
 */