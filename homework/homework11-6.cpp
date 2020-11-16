//
// Created by haofeng on 5/4/20.
//
//超大背包？==>可以但没必要
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,M;
int CDTIME[25];
int f[25][10010];
vector<int> fv;//记录？能否倒推？
void solve() {
    for (int i = 0; i <= N; ++i) f[0][i] = 0;
    for (int i = 1; i <= M; ++i) {
        //cout<<"CDTIME"<<i<<" "<<CDTIME[i]<<endl;
        for (int j = 0; j <= N; ++j) {
            f[i][j] = f[i - 1][j];
            if (j >= CDTIME[i]) {
                f[i][j] = max(f[i][j], f[i - 1][j - CDTIME[i]] + CDTIME[i]);
            }
        }
    }
}
void findcd(){
    int i=M,j=N;
    while (i!=0&&j!=0){
        if(f[i][j]-f[i-1][j-CDTIME[i]]==CDTIME[i]){
            fv.push_back(CDTIME[i]);
            j-=CDTIME[i];
            i--;
        }
        else{
            i--;
        }
    }
    for (int i = 0; i <fv.size() ; ++i) {
        cout<<fv[i]<<" ";
    }
    cout<<"sum:"<<f[M][N]<<endl;
    fv.clear();
}
int main(){
    while (cin>>N){
        cin>>M;
        for (int i = 1; i <=M ; ++i) {
            cin>>CDTIME[i];
        }
        solve();
        findcd();
    }
}