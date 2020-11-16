//
// Created by haofeng on 4/21/20.
//
#include <stdio.h>
#include <algorithm>
using namespace std;
int x,y;
int a[100];
int main(){
    scanf("%d %d",&x,&y);
    int sum=0;
    for(int i=0;i<x;i++) scanf("%d", &a[i]);
    sort(a,a+x);
    for(int i=0;i<x;i++)sum+=a[x-1]-a[i];
    int km;
    if(sum>=y)km=a[x-1];
    else {
        km=a[x-1]+(y-sum)/x;
        if((y-sum)%x!=0)km++;
    }
    int kx=a[x-1]+y;
    printf("%d %d",km,kx);
}