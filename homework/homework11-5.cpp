//
// Created by haofeng on 5/1/20.
//
#include <iostream>
#include <algorithm>
using namespace std;
int total;
int N;
int CASHVALUE[11];//面值
int CASHNUMBER[11];//有多少张
int AFTERVALUE[110];//<1000 2^10
int f[100010];
int cont(){
    int cnt=0;
    for (int i = 1; i <=N ; ++i) {
        int t=CASHNUMBER[i];
        for (int j = 1; j <=t ; j<<=1) {
            cnt++;
            AFTERVALUE[cnt]=j*CASHVALUE[i];
            t-=j;
        }
        if(t>0){
            cnt++;
            AFTERVALUE[cnt]=t*CASHVALUE[i];//偏移量
        }
    }
    return cnt;
}
int solve(){
    for (int i = 0; i <= total; ++i) f[i]=0;
    for (int i = 1; i <= cont(); ++i) {
        for (int j = total; j>=AFTERVALUE[i]; --j) {//课件上是伪代码
            f[j]=max(f[j],f[j-AFTERVALUE[i]]+AFTERVALUE[i]);
            //cout<<"j: "<<j<<" f[j]:  "<<f[j]<<endl;
        }
    }
    return f[total];
}
int main(){
    while (cin>>total){
        cin>>N;
        for (int i = 1; i <= N; ++i) {
            cin>>CASHNUMBER[i]>>CASHVALUE[i];
        }
        cout<<solve()<<endl;
    }
}