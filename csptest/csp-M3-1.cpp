//
// Created by haofeng on 4/22/20.
//
/*
#include <iostream>
#include <stdio.h>
#include <stack>
#include <string>
using namespace std;
stack<char> ST;
int main(){
    string X;cin>>X;
    for(int i=0;i<X.size();++i){
        if (!ST.empty()){
            if(ST.top()=='S'&&X[i]=='T'){
                ST.pop();
            }
            else{
                ST.push(X[i]);
            }
        }
        else {
            ST.push(X[i]);
        }
    }
    cout<<ST.size()<<endl;
}
 */