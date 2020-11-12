//
// Created by haofeng on 5/29/20.
//
/*
#include <iostream>
using namespace std;
int L[100010];
int R[100010];
int N,X;
int total=0;
using namespace std;
int main(){
    cin>>N>>X;
    R[0]=0;
    for (int i = 1; i <=N ; ++i) {
        cin>>L[i]>>R[i];
        total+=(R[i]-L[i]+1);
    }
    for (int i = 1; i <=N ; ++i) {
        total+=(L[i]-R[i-1]-1)%X;
    }
    cout<<total<<endl;
}
*/