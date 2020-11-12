//
// Created by 冯灏 on 3/6/20.
//
/*
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "stdio.h"
using namespace std;
struct person{
    string name;
    int points,number;
};
bool compare1(person&p1,person& p2){//因为sort默认是升序，所以重写个比较函数，重载不确定是否要重载<和>
    if(p1.number<p2.number){return false;}
    else if (p1.number==p2.number){
        if(p1.points<p2.points){return true;}
        else if (p1.points==p2.points){
            return p1.name<p2.name;
        }
        return false;
    }
    return true;
}
int main(){
    int n,m;//n是题目数，m是罚时标准分
    char str[10];
    scanf("%d %d",&n,&m);
    //person* ps=new person[n];自己搞晕了，有多少人数是不一定的
    vector<person> pers;
    //person test1,test2;
    //test1.name="feng";test1.number=5;test1.points=10;
    //test2.name="feng";test2.number=4;test2.points=10;
    //if(compare1(test1,test2)){cout<<"ture"<<endl;}
    //else{cout<<"false";}

    while (~scanf("%s",str)){
        person pp;
        pp.name=str;pp.points=pp.number=0;
        int num=0,poi=0;
        for(int i=0;i<n;i++){
            char temp[11];
            scanf("%s",temp);
            if(sscanf(temp,"%d(%d)",&poi,&num)==1){
                if(poi>0){pp.number++;pp.points+=(poi);}
            }
            else{
                if(poi>0){pp.number++;pp.points+=(poi+m*num);}
            }
            //这是我看别人的思路，非原创，最初的做法是将字符串保存下来，然后去扫描，
            // "-"为负号，"（）"提取出来，不过这样要经历大量的字符串转整数的过程
        }
        pers.push_back(pp);
    }
    sort(pers.begin(),pers.end(),compare1);//博客上这样写的......
    vector<person>::iterator it;
    for(it=pers.begin();it!=pers.end();it++){
        printf("%-10s %2d %4d\n",it->name.c_str(),it->number,it->points);
    }

}
*/