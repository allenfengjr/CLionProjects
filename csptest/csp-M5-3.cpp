//
// Created by haofeng on 5/15/20.
//
/*
#include <iostream>
#include <string>
using namespace std;
string num;
int main(){
    cin>>num;
    int n=num.size();
    int total=0;
    for (int i = 0; i < n; ++i) {
        total+=num[i]-'0';
    }
    while (total>=10){
        string tmp=to_string(total);
        int m=tmp.size();
        total=0;
        for (int i = 0; i <m ; ++i) {
            total+=tmp[i]-'0';
        }
    }
    cout<<total;
}
*/