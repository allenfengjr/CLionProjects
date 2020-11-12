//
// Created by haofeng on 4/29/20.
//
/*
#include <iostream>
#include <algorithm>
using namespace std;
double K;
double N;
double Eps=0.001;
int main(){
    cin>>N>>K;
    double totalN=N;
    double totalK=200;
    int year=0;
    for (int i = 1; i <= 20; ++i) {
        //cout<<totalN<< "    "<<totalK<<endl;
        if(abs(totalN-totalK)<Eps||totalN>totalK){
            year=i;
            break;
        }
        totalN+=N;
        totalK*=(1+K/100);
    }
    if(year==0){
        cout<<"Impossible";
    }
    else{
        cout<<year;
    }
}
*/