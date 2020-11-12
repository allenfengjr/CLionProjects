//
// Created by haofeng on 3/27/20.
//程序设计的方法解决这道题，而不是用数学。
// A 和 B (5 ≤ A ≤ 25, 1 ≤ B ≤ 4).
//
/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct card{
    int color,number;
};
bool cmp(card&c1,card&c2){
    if(c1.number!=c2.number)return c1.number<c2.number;
    return c1.color<c2.color;
}
int paixing(card c[]){
    int paixing;//返回值0-9
    int color_equal=0;
    int two=0;
    int triple=0;
    int shunzi=0;
    //总是出现两张0 0？为什么
    for(int i=0;i<4;i++){
        if(c[i].color==c[i+1].color)color_equal++;//4为同花
    }
    for(int i=0;i<3;i++){
        if(c[i].number==c[i+1].number&&c[i+1].number==c[i+2].number)triple++;//1为三条，2为炸弹
    }
    for(int i=0;i<4;i++){
        if(c[i].number==c[i+1].number)two++;//1为对,2且triple为0为两对，3为炸弹
        if(c[i+1].number-c[i].number==1)shunzi++;//4时为顺子
    }
    if(color_equal==4&&shunzi==4){paixing=0;}//同花顺
    else if(two==3&&triple==2){paixing=1;}//boom
    else if(triple==1&&two==3){paixing=2;}//3+2
    else if(color_equal==4){paixing=3;}//同花
    else if(shunzi==4){paixing=4;}//顺子
    else if(triple==1){paixing=5;}//三条
    else if(triple==0&&two==2){paixing=6;}//两对
    else if(two==1){paixing=7;}
    else{paixing=8;}
    return paixing;
}
card cards[5];
bool Cab[100][100][100];//可以通过控制三张牌的相对顺序实现排列而不是选择
bool pool[25][4];
int A,B;
int tran(int a,int b){
    return b*A+a;
}
int res[9];
int main(){
    int total=0;
    cin>>A>>B;
    int pn1,pc1,pn2,pc2;
    cin>>pn1 >>pc1;
    cin>>pn2>>pc2;
    //需要一个高效的遍历
    cards[0].number=pn1;
    cards[0].color=pc1;
    cards[1].number=pn2;
    cards[1].color=pc2;
    for(int i=0;i<25;i++){
        for(int j=0;j<4;j++){
            pool[i][j]= true;
        }
    }
    for(int a=0;a<100;a++){
        for(int b=0;b<100;b++){
            for(int c=0;c<100;c++){
                Cab[a][b][c]=true;
                //组合可用
            }
        }
    }
    for(int i=0;i<9;i++){res[i]=0;}
    pool[cards[0].number][cards[0].color]=false;
    pool[cards[1].number][cards[1].color]=false;
    //从牌池中取出
    for(int pn3=0;pn3<A;pn3++){
        for (int pc3 = 0; pc3 < B; pc3++) {
            if(pool[pn3][pc3]) {
                cards[2].number = pn3;
                cards[2].color = pc3;
                pool[pn3][pc3]=false;
                for (int pn4 = pn3; pn4 < A; pn4++) {
                    for(int pc4=0;pc4<B;pc4++){
                        if(pool[pn4][pc4]) {
                            cards[3].number = pn4;
                            cards[3].color = pc4;
                            pool[pn4][pc4] = false;
                            for(int pn5=pn4;pn5<A;pn5++){
                                for(int pc5=0;pc5<B;pc5++){
                                    if(pool[pn5][pc5]) {
                                        cards[4].number = pn5;
                                        cards[4].color = pc5;
                                        int C3,C4,C5;
                                        C3=tran(pn3,pc3);C4=tran(pn4,pc4);C5=tran(pn5,pc5);
                                        if(Cab[C3][C4][C5]&&Cab[C3][C5][C4]&&Cab[C4][C3][C5]&&Cab[C4][C5][C3]
                                        &&Cab[C5][C3][C4]&&Cab[C5][C4][C3]){
                                            sort(cards,cards+5,cmp);
                                            total++;
                                            res[paixing(cards)]++;
                                            //计算属于哪种牌型
                                            //再放回
                                            Cab[C3][C4][C5]=Cab[C3][C5][C4]=Cab[C4][C3][C5]=Cab[C4][C5][C3]
                                            =Cab[C5][C3][C4]=Cab[C5][C4][C3]= false;
                                            cards[0].number=pn1;
                                            cards[0].color=pc1;
                                            cards[1].number=pn2;
                                            cards[1].color=pc2;
                                            cards[2].number=pn3;
                                            cards[2].color=pc3;
                                            cards[3].number=pn4;
                                            cards[3].color=pc4;
                                        }

                                    }
                                }
                            }
                            pool[pn4][pc4]=true;
                        }
                    }
                }
                pool[pn3][pc3]=true;
            }
        }
    }
    for(int i=0;i<9;i++){
        cout<<res[i]<<" ";
    }
}
 */