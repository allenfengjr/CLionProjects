//
// Created by 冯灏 on 3/13/20.
//
/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
struct test{
    int point;
    int DDL;

    bool operator <(test&t2){
        //先按DDL，再按分数排
        if(this->DDL!=t2.DDL){ return this->DDL<t2.DDL;}
        return this->point<t2.point;
    }
    bool operator ()(test&t1,test&t2){
        //()运算符
        if(t1.point!=t2.point){ return t1.point<t2.point;}
        return t1.DDL<t2.DDL;
    }
};
bool cmp (test& t1,test&t2){
    //先按DDL，再按分数排
    if(t1.DDL!=t2.DDL){ return t1.DDL<t2.DDL;}
    return t1.point<t2.point;
}
test TESTS [1000];
bool DO[1000]={false};
int N;//每一组数量
int T;//测试数量
priority_queue<test,vector<test>,test> h;//最大堆
int main(){
    cin>>T;
    while (T>0){
        T--;
        cin>>N;int total=0;//总分数
        int day=N;//当前是第几天
        for(int i=0;i<N;i++){cin>>TESTS[i].DDL;}
        for(int i=0;i<N;i++){cin>>TESTS[i].point;total+=TESTS[i].point;}
        sort(TESTS+0,TESTS+N,cmp);
        //现在已经排好了顺序，从后向前开始找
        int now_pos=N-1;//在数组中的下标
        while (day>0){
            while (now_pos>=0&&TESTS[now_pos].DDL>=day){
                h.push(TESTS[now_pos]);
                now_pos--;
            }
            if(!h.empty()){
                total-=h.top().point;
                h.pop();
            }
            day--;
        }

        cout<<total<<endl;

        while (!h.empty()){h.pop();}
        for(int i=0;i<N;i++){DO[i]=false;}

    }
}
*/