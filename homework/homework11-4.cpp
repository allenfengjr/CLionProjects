//
// Created by haofeng on 4/29/20.
//
/*
#include <iostream>
#include <algorithm>
using namespace std;
int now;
int MAX=0;
int eel=0;
int tuna=0;
int main(){
    int n;cin>>n;int m;cin>>m;now=m;if(now==1)eel=1;else tuna=1;
    for (int i = 1; i < n; ++i) {
        cin>>m;
        if(now==m){//keep going
            if(now==1)eel++;
            else tuna++;
        }
        else{//112221,2keep,1clear
            if(m==1)eel=1;
            else tuna=1;
        }
        now=m;
        MAX=max(MAX,min(eel,tuna));
    }
    cout<<2*MAX<<endl;
}
*/