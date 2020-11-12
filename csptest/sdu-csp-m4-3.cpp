//
// Created by 冯灏 on 6/3/20.
//

#include <iostream>
#include <string.h>
using namespace std;
int dp[710][710];//dp[i][j]是从i-j个可以构造的二叉搜索树
int GCD[710][710];
int L[710][710],R[710][710];//L,R表示以i为根，是否可以从j到i构成为左/右子树
int N;
int num[710];
bool can=false;
int gcd(int a,int b){return b == 0 ? a : gcd(b,a%b);}
void init(){
    memset(L,0,sizeof(L));
    memset(R,0,sizeof(R));
    memset(dp,0, sizeof(dp));
    memset(GCD,0, sizeof(GCD));
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j++){
            GCD[j][i]=gcd(num[i],num[j]);
            GCD[i][j]=GCD[j][i];
        }
        L[i][i]=1;
        R[i][i]=1;
    }
}
void getTree(){
    for (int l = 1; l <=N ; ++l) {
        //每一次,子树就多一
        for (int i = 1; i <=N-l+1 ; ++i) {
            //计算每个节点,一定节点的左右子树是否可行
            int r=i+l-1;//向右可以遍历的极限
            for (int j=i;j<=r;++j){
                if(L[j][i]>0&&R[j][r]>0){
                    dp[i][r]=1;
                    //只要有一个可以连起来,就可以了
                    if(GCD[j][r+1]>1)L[r+1][i]=1;
                    if(GCD[i-1][j]>1)R[i-1][r]=1;
                }
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while (t--){
        cin>>N;
        for (int i = 1; i <=N ; ++i) {
            cin>>num[i];
        }
        can=false;
        init();
        getTree();
        if(dp[1][N]>0)can=true;
        if(can){
            cout<<"Yes\n";
        } else{
            cout<<"No\n";
        }
    }
}