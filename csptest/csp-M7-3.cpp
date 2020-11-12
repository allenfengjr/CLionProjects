//
// Created by haofeng on 5/29/20.
//
/*
#include <iostream>
#include <stdio.h>
using namespace std;
int N;
char strs[200010];
int main(){
    scanf("%d",&N);
    for (int i = 1; i <=N ; ++i) {
        cin>>strs[i];
    }
    int index=0;
    for (int i = 1; i <N ; ++i) {
        if(strs[i]>strs[i+1]){
            index=i;
            break;
        }
        else{
            index=i+1;
        }
    }
    for (int i = 1; i <index ; ++i) {
        printf("%c",strs[i]);
    }
    for (int i = index+1; i <=N ; ++i) {
        printf("%c",strs[i]);
    }
}
*/