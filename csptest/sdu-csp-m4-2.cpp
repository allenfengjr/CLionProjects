//
// Created by haofeng on 6/3/20.
//
/*
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
struct point{
    long long x,y;
};
bool cmp (point & p1,point & p2)  {
    if(p1.x!=p2.x)return p1.x<p2.x;
    return p1.y<p2.y;
}
point POIS[1010];
long long distan[1010][1010];
long long dismax[1010];
long long N;
long long getdis(long long i,long long j){
    //之前这里传参是int,可能int和int相乘,这个过程超了,再赋给long long也没用了
    return ((POIS[i].x-POIS[j].x)*(POIS[i].x-POIS[j].x)+(POIS[i].y-POIS[j].y)*(POIS[i].y-POIS[j].y));
}
int main(){
    scanf("%lld",&N);
    for (long long i = 0; i < N ; ++i) {
        scanf("%lld %lld",&POIS[i].x,&POIS[i].y);
    }
    sort(POIS,POIS+N,cmp);
    for (long long i = 0; i <N ; ++i) {
        for (long long j = i; j <=N ; ++j) {
            distan[i][j]=distan[j][i]=getdis(i,j);
        }
    }
    long long all_max_min=99999999999;
    for (long long i = 0; i <N ; ++i) {
        long long tmp_max=-99999;
        for (long long j = 0; j <N ; ++j) {
            //cout<<distan[i][j]<<" ";
            tmp_max=max(tmp_max,distan[i][j]);
        }
        dismax[i]=tmp_max;
        all_max_min=min(all_max_min,tmp_max);
    }
    for (long long i = 0; i <N ; ++i) {
        if(dismax[i]==all_max_min){
            printf("%lld.00 %lld.00\n",POIS[i].x,POIS[i].y);
            break;
        }
    }
    std::cout<<all_max_min<<".00"<<std::endl;
}
*/