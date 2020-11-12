//
// Created by haofeng on 5/6/20.
//
/*
#include <iostream>
using namespace std;
int N;
int M;
int chessmap[31][31];//从1开始，1-N
bool clearmap[31][31];
void checkmap(){
    //检查左右上下，最边上的一层不管
    for (int i = 0; i <=N ; ++i) {
        for (int j = 0; j <=M ; ++j) {
            clearmap[i][j]= false;
        }
    }
    for (int i = 2; i < N; ++i) {
        for (int j = 1; j <= M ; ++j) {
            if (chessmap[i][j]==chessmap[i-1][j]&&chessmap[i][j]==chessmap[i+1][j]){
                //上下
                clearmap[i][j]=true;
                clearmap[i-1][j]=true;
                clearmap[i+1][j]=true;
            }
        }
    }
    for (int i = 1; i <= N; ++i) {
        for (int j = 2; j < M ; ++j) {
            if (chessmap[i][j]==chessmap[i][j-1]&&chessmap[i][j]==chessmap[i][j+1]){
                //左右
                clearmap[i][j]=true;
                clearmap[i][j-1]=true;
                clearmap[i][j+1]=true;
            }
        }
    }

}
int main(){
    cin>>N>>M;
    for (int i = 1; i <=N ; ++i) {
        for (int j = 1; j <=M ; ++j) {
            cin>>chessmap[i][j];
        }
    }
    checkmap();
    for (int i = 1; i <=N ; ++i) {
        if(clearmap[i][1]==true)cout<<"0";
        else cout<<chessmap[i][1];
        for (int j = 2; j <=M ; ++j) {
            if(clearmap[i][j]==true)cout<<" "<<"0";
            else cout<<" "<<chessmap[i][j];
        }
        cout<<endl;
    }
}
*/