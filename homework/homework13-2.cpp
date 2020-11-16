//
// Created by haofeng on 5/15/20.
//
#include <iostream>
using namespace std;
int N,K,T;
int main(){
    cin>>T;
    while(T--){
        cin>>N>>K;
        int G=K/(N-1);
        int tmp=K-G*(N-1);
        if(tmp==0) {
            cout << G * N + tmp -1<< endl;
        }
        else{
            cout<<G*N+tmp<<endl;
        }
    }
}