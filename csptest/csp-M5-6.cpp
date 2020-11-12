//
// Created by haofeng on 5/15/20.
//
/*
#include <iostream>
using namespace std;
int NNAA[101];
int NNBB[101];
int main(){
    int N,NA,NB;int Awin=0,Bwin=0;
    cin>>N>>NA>>NB;
    for (int i = 1; i <NA ; ++i) cin>>NNAA[i];
    cin>>NNAA[0];
    for (int i = 1; i <NB; ++i)  cin>>NNBB[i];
    cin>>NNBB[0];
    for(int i=1;i<=N;++i){
        int tmpA=NNAA[i%NA];
        int tmpB=NNBB[i%NB];
        if(tmpA==tmpB);
        else{
            if(tmpA==0&&tmpB==2||tmpA==2&&tmpB==5||tmpA==5&&tmpB==0){
                Awin++;
            }
            else{
                Bwin++;
            }
        }
    }
    if(Awin>Bwin){
        cout<<"A";
    }
    else if(Awin<Bwin){
        cout<<"B";
    }
    else{
        cout<<"draw";
    }
}
*/