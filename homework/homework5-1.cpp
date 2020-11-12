//
// Created by haofeng on 3/21/20.
//
/*
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
stack<int> min_stack;
//栈中存下标
int N;
long long rec_h[1000000];
int left_index[1000000];
int right_index[1000000];
//最后left，right是开区间
void right_min_first(){
    for(int i=0;i<N;i++){
        right_index[i]=N;
        while(!min_stack.empty()&&rec_h[min_stack.top()]>rec_h[i]){
            right_index[min_stack.top()]=i;
            //当需要出栈时，对出栈的哪些下标对应的rigth_index改变
            min_stack.pop();
        }
        min_stack.push(i);
    }
    while(!min_stack.empty()){
        min_stack.pop();
    }
}
void left_min_first(){
    for(int i=N-1;i>=0;i--){
        left_index[i]=-1;
        while(!min_stack.empty()&&rec_h[min_stack.top()]>rec_h[i]){
            left_index[min_stack.top()]=i;
            min_stack.pop();
        }
        min_stack.push(i);
    }
    while(!min_stack.empty()){
        min_stack.pop();
    }
}
int main(){

    while (cin>>N){
        if(N==0)break;
        for(int i=0;i<N;i++)cin>>rec_h[i];
        left_min_first();
        right_min_first();
        long long sizemax=0;
        for(int i=0;i<N;i++){
            int left=left_index[i],right=right_index[i];
            sizemax=max(sizemax,(right-left-1)*rec_h[i]);
        }
        cout<<sizemax<<endl;
    }
}
 */
