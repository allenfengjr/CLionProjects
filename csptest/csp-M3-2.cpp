//
// Created by haofeng on 4/22/20.
//
/*
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
struct oneface{
    int numbers[2][2];
    bool sameornot(){
        bool sm=true;
        for(int i=0;i<2;++i)
            for(int j=0;j<2;++j)
                if(numbers[i][j]!=numbers[0][0])
                    sm=false;
        return sm;
    };
    int hengshu(){
        if(numbers[0][0]==numbers[1][0]&&numbers[0][1]==numbers[1][1])return 1;//竖着相等
        if(numbers[0][0]==numbers[0][1]&&numbers[1][0]==numbers[1][1])return 2;//横着相等
        return 3;//全差了
    }
    void zhuan(int shunni){
        if(shunni==1){
            int n1=numbers[0][0];
            int n2=numbers[0][1];
            int n3=numbers[1][1];
            int n4=numbers[1][0];
            numbers[0][0]=n4;
            numbers[0][1]=n1;
            numbers[1][1]=n2;
            numbers[1][0]=n3;
        } else{
            int n1=numbers[0][0];
            int n2=numbers[0][1];
            int n3=numbers[1][1];
            int n4=numbers[1][0];
            numbers[0][0]=n2;
            numbers[0][1]=n3;
            numbers[1][1]=n4;
            numbers[1][0]=n1;
        }
    }
};
struct magiccube{
    oneface Cube[6];//相对两面索引为5
    int finishnum(){
        //已经好了的,6则完成,2则继续判断
        int af=0;
        for(int i=0;i<6;++i){
            if(Cube[i].sameornot()){af++;}
        }
        return af;
    }
    int alreadfinish(){
        //返回已经转好的两面
        for(int i=0;i<6;++i){
            if(Cube[i].sameornot()&&Cube[5-i].sameornot())return i;
        }
        return 6;//如果两面不是相对，返回6
    }
    void ofchg(oneface& of1,oneface& of2,oneface& of3,oneface& of4){//验证没问题
        oneface off1=of1,off2=of2,off3=of3,off4=of4;
        of1=off4;of2=off1;of3=off2;of4=off3;
    }
    void changeface(){
        //让顶面和底面为已经完成的面
        if(alreadfinish()==0)return;
        else if(alreadfinish()==1){
            //前后
            ofchg(Cube[1],Cube[0],Cube[4],Cube[5]);
            //按实际转,调整6个面
            Cube[3].zhuan(1);
            Cube[2].zhuan(2);
            Cube[4].zhuan(1);Cube[4].zhuan(1);
        }
        else if(alreadfinish()==2){
            //左右
            ofchg(Cube[2],Cube[0],Cube[3],Cube[5]);
            Cube[1].zhuan(1);
            Cube[4].zhuan(2);
            Cube[2].zhuan(1);
            Cube[3].zhuan(1);
        }
    }

    bool baspos(){
        bool heng=true;
        for(int i=1;i<5;++i){
            if(Cube[i].hengshu()!=2){heng=false;
            break;}
        }
        return heng;
    }
    bool turnleft(){
        //上半部分向左转
        if(Cube[1].numbers[0][0]==Cube[2].numbers[1][0]&&
        Cube[2].numbers[0][0]==Cube[4].numbers[1][0]&&
        Cube[4].numbers[0][0]==Cube[3].numbers[1][0]&&
        Cube[3].numbers[0][0]==Cube[1].numbers[1][0]){
            return true;
        }
        return false;
    }
    bool turnright(){
        if(Cube[1].numbers[0][0]==Cube[3].numbers[1][0]&&
           Cube[3].numbers[0][0]==Cube[4].numbers[1][0]&&
           Cube[4].numbers[0][0]==Cube[2].numbers[1][0]&&
           Cube[2].numbers[0][0]==Cube[1].numbers[1][0]){
            return true;
        }
        return false;
    }
}MC;
int main(){
    int N;cin>>N;
    int indexss[6]={0,1,5,4,2,3};
    for(int tim=0;tim<N;tim++) {
        for (int i = 0; i < 6; ++i) {
            for (int j = 0; j < 2; ++j)
                for (int k = 0; k < 2; ++k) {
                    cin >> MC.Cube[indexss[i]].numbers[j][k];
                }
        }
        MC.Cube[4].zhuan(1);
        MC.Cube[4].zhuan(1);
        MC.Cube[2].zhuan(2);
        MC.Cube[3].zhuan(1);
        //1
        //5 5 2 2 1 1 1 1 4 4 3 3 6 6 6 6 2 2 3 3 4 4 5 5
        //cout<<MC.finishnum()<<endl;
        bool canornot = false;
        int thesize = MC.finishnum();
        if (thesize == 6) { canornot = true; }
        else if (thesize == 2) {
            int finedface = MC.alreadfinish();
            if (finedface == 6) { canornot = false; }
            else {
                //两面是相对的
                MC.changeface();
                if (MC.baspos()&&(MC.turnleft() || MC.turnright())) {
                    canornot = true;
                }
            }
        } else { canornot = false; }
        if (canornot)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
 */