//
// Created by 冯灏 on 3/4/20.
//递归+剪枝
//
#include <iostream>
#include <list>
/*
using namespace std;
int all_number[16];
int T,N,K,SUM,accept;
void decide(int i,list<int>&set,int sum){
    if(set.size()==K){//已经选够了
        if(sum==SUM){
            accept++;
        }
        return;
    }
    if(i>=N)return;;//边界
    if(set.size()>K)return;//选的超过了K个
    if(sum>SUM)return;//已经选的sum大于目标
    //先看选择情况
    set.push_back(all_number[i]);
    decide(i+1,set,sum+all_number[i]);
    set.pop_back();
    //再看不选情况
    decide(i+1,set,sum);
}
int main(){
    cin>>T;
    for(int i=0;i<T;i++){
        list<int> selected;
        cin>>N>>K>>SUM;
        for(int j=0;j<N;j++){
            cin>>all_number[j];
        }
        decide(0,selected,0);
        cout<<accept<<endl;
        accept=0;
    }
}
 */