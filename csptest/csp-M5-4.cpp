//
// Created by haofeng on 5/15/20.
//
/*
#include <iostream>
using namespace std;
bool lights[5010];
void change(int i){
    if(lights[i])lights[i]=false;
    else lights[i]=true;
}
int main(){
    int N,M;cin>>N>>M;
    for (int i = 1; i <=N ; ++i) {
        lights[i]= true;
    }
    for (int i = 1; i <=M ; ++i) {
        int tmp=i;
        while (tmp<=N){
            change(tmp);
            tmp+=i;
        }
    }
    cout<<"1";
    for (int i = 2; i <=N ; ++i) {
        if(lights[i]==false)cout<<","<<i;
    }
}
 */