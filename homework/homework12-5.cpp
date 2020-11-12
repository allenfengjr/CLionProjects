//
// Created by haofeng on 5/14/20.
//
/*
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int f[35000];//被扣的最少分数 2^15
int sum[35000];//当前总时间
int pre[35000];//最后一个作业
int c[16];//所需时间
int d[16];//DDL
string names[16];
int N;
void out(int all){
    if(all==0)return;
    int P=pre[all];
    out(all^(1<<P));
    cout<<names[P]<<endl;
}
int main(){
    int TIME;cin>>TIME;
    for(int times=0;times<TIME;times++){
        cin>>N;
        for (int i = 0; i <N ; ++i) {
            //一定注意这一点,这里从0开始比从1开始简单得多
            //在移位时要特别注意,第一位是不能空的,否则那一位空着,有一半是在虚假的迭代(i为奇数),好像会搞乱
            cin>>names[i]>>d[i]>>c[i];
        }
        for (int i = 0; i <=(1<<(N)) ; ++i) {
            f[i]=1000000;sum[i]=0;pre[i]=0;
        }
        f[0]=0;
        for (int i = 1; i <(1<<N) ; ++i) {
            //说实话,状态压缩我不觉得这是典型的dp...
            //我只是确保能先走完所需要的所有情况,更像是优化的循环?
            for (int j = 0; j <N ; ++j) {
                if(i&(1<<j)){
                    int k=i^(1<<j);
                    int tmp=max(0,sum[k]+c[j]-d[j]);
                    f[i]=min(f[i],f[k]+tmp);//迭代j,找到加入哪个最优
                    if(f[i]==f[k]+tmp){
                        //如果发现被更新,则加入当前状态
                        pre[i]=j;
                        sum[i]=sum[k]+c[j];
                    }
                }
            }
        }
        cout<<f[(1<<N)-1]<<endl;
        out((1<<N)-1);
    }
}
 */