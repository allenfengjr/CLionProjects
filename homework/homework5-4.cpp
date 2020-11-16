//
// Created by haofeng on 3/21/20.
//
// ios::sync_with_stdio(false);亲身试验这句话没用,必须用scanf和printf
#include <iostream>
#include <deque>
#include <stdio.h>
using namespace std;
int N,K;//N为size,K为窗口大小
int WIN[1000100];
//双向队列，STL为deque,(还是太菜了，不然手写快)
deque<int> K_W;
pair<int,int> min_max[1000100];//记录最大值和最小值
void get_max(){
    K_W.clear();
    for(int i=0;i<N;i++){
        while (!K_W.empty()&&WIN[K_W.back()]<WIN[i]){
            //把更大的数插进去
            K_W.pop_back();
        }
        K_W.push_back(i);
        if (!K_W.empty()&&K_W.back()-K_W.front()+1>K){
            K_W.pop_front();
        }
        if(i-K+1>=0) {
            min_max[i-K+1].first = WIN[K_W.front()];
        }
    }
}
void get_min(){
    K_W.clear();
    for(int i=0;i<N;i++){
        while (!K_W.empty()&&WIN[K_W.back()]>WIN[i]){
            //把更小的数插进去
            K_W.pop_back();
        }
        K_W.push_back(i);
        if (!K_W.empty()&&K_W.back()-K_W.front()+1>K){
            K_W.pop_front();
        }
        if(i-K+1>=0) {
            min_max[i-K+1].second = WIN[K_W.front()];
        }
    }
}
int main(){
    scanf("%d %d",&N,&K);
    for(int i=0;i<N;i++){scanf("%d",&WIN[i]);}
    get_max();
    get_min();
    for(int j=0;j<N-K+1;j++){
        printf("%d ",min_max[j].second);
    }
    cout<<endl;
    for(int j=0;j<N-K+1;j++){
        printf("%d ",min_max[j].first);
    }
}