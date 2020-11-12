//
// Created by haofeng on 6/3/20.
//
/*
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int k,N;
string a[1000010];
int shuweik(string s){
    int shuwei[10];
    memset(shuwei,0, sizeof(shuwei));
    for (int i = 0; i <s.size() ; ++i) {
        shuwei[(s[i]-'0')]=1;
    }
    int tot=0;
    for (int i = 0; i <10 ; ++i) {
        tot+=shuwei[i];
    }
    return tot;
}
int main(){
    int all;
    cin>>N>>k;
    for (int i = 0; i <N ; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i <N; ++i) {
        if(shuweik(a[i])<k){
            all++;
        }
    }
    cout<<all;
}
*/