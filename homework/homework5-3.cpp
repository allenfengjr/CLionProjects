//
// Created by haofeng on 3/21/20.
//
/*
#include <iostream>
#include <algorithm>
using namespace std;
int N=0;
char t;
int thestr[1100000];//QWER分别对应0123
int QWER[4];//四种元素当前未在选中区的个数
int L,R;//区域的左右端点，认为是闭的
void input(int i,char TEMP){
    switch (TEMP){
        case 'Q':{thestr[i]=0;QWER[0]++;break;}
        case 'W':{thestr[i]=1;QWER[1]++;break;}
        case 'E':{thestr[i]=2;QWER[2]++;break;}
        case 'R':{thestr[i]=3;QWER[3]++;break;}
        default:
            break;
    }
}
bool balance(){
    int themax=max(max(QWER[0],QWER[1]),max(QWER[2],QWER[3]));
    int len=R-L+1;//闭区间
    int acp=themax*4-QWER[0]-QWER[1]-QWER[2]-QWER[3];
    return len>=acp;
}
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){input(i,str[i]);}
    L=R=0;
    N=str.size();
    int min_len=N;
    QWER[thestr[L]]--;//把初始时那个点处理一下
    while(L<=N-1&&R<=N-1){
        //在balance处更新
        if(balance()){min_len=min(min_len,R-L+1);L++;QWER[thestr[L-1]]++;}
        else {R++;QWER[thestr[R]]--;}
    }
    cout<<min_len<<endl;
}

*/