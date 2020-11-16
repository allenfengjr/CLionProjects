//
// Created by haofeng on 4/15/20.
//
#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int G;
const int MAX=1e5+10;
struct cards{
    string name;
    int card[5];
    int firstlv=0;
    int secondlv=0;
    bool operator<(cards& c){
        if(firstlv!=c.firstlv)return firstlv>c.firstlv;
        if(secondlv!=c.secondlv)return secondlv>c.secondlv;
        return name<c.name;
    }
    void get_firstlv(){
        sort(card,card+5);
        if(dou()==1){
            firstlv=2;
        }
        else if(tri()==0&&dou()==2){
            firstlv=3;//两对
        }
        else if(tri()==1&&dou()==2){
            firstlv=4;//三个
        }
        else if(tri()==1&&dou()==3){
            firstlv=5;//三带二
        }
        else if(boom()==1){
            firstlv=6;
        }
        else if(shunzi()==4){
            firstlv=7;
        }
        else if(card[0]==1&&card[1]==10&&card[2]==11&&card[3]==12&&card[4]==13){
            firstlv=8;//龙顺子
        }
        else{
            firstlv=1;//其他
        }
    }
    void get_secondlv(){
        switch (firstlv){
            case 1: {
                secondlv = 0;
                for (int i = 0; i < 5; ++i)secondlv += card[i];
                break;
            }
            case 2: {
                int d=0;
                for (int i = 0; i < 4; ++i)
                    if (card[i] == card[i + 1]) {
                        secondlv = 40 * card[i];
                        d=card[i];
                    }
                for (int j = 0; j < 5; ++j) {
                    if(card[j]!=d)secondlv+=card[j];
                }
                break;
            }
            case 3: {
                //两对
                int d1 = -1, d2 = 0;secondlv=0;
                for (int i = 0; i < 4; ++i) {
                    if (card[i] == card[i + 1]) {
                        if (d1 == -1)d1 = card[i];
                        else d2 = card[i];
                        i++;
                    }
                }
                for(int i=0;i<5;++i){
                    if(card[i]!=d1&&card[i]!=d2){
                        secondlv+=card[i];
                    }
                }
                if (d1 > d2) {
                    d1 *= 400;
                    d2 *= 20;
                }
                else {
                    d2 *= 400;
                    d1 *= 20;
                }
                secondlv += d1 + d2 ;
                break;
            }
            case 4: {
                //三个
                secondlv = 0;int tr;
                for (int i = 0; i < 3; ++i) {
                    if (card[i] == card[i + 1] && card[i] == card[i + 2]) {
                        secondlv += 40 * card[i];
                        tr=card[i];
                    }
                }
                for(int i=0;i<5;++i){
                    if(card[i]!=tr)secondlv+=card[i];
                }
                break;
            }
            case 5:{
                //三加二
                int tr,dou;
                for (int i = 0; i < 3; ++i) {
                    if (card[i] == card[i + 1] && card[i] == card[i + 2]) {
                            tr=card[i];
                    }
                }
                if(card[0]==tr){dou=card[4];}
                else dou=card[0];
                secondlv=dou+tr*20;
                break;
            }
            case 6:{
                int boomm;
                for(int i=0;i<2;i++) {
                    if (card[i] == card[i + 1] && card[i + 1] == card[i + 2] && card[i + 2] == card[i + 3])
                        boomm = card[i];
                }
                if(card[0]==boomm)secondlv=boomm*20+card[4];
                else secondlv=card[0]+boomm*20;
                break;
            }
            case 7:{
                secondlv=card[4];
                break;
            }
            case 8:{
                secondlv=1;//无所谓了
                break;
            }
        }
    }
    int dou(){
        int dou=0;
        for(int i=0;i<4;i++)
            if(card[i]==card[i+1])dou++;
        return dou;
    }
    int tri(){
        int tri=0;
        for(int i=0;i<3;i++)
            if(card[i]==card[i+1]&&card[i+1]==card[i+2])tri++;
        return tri;

    }
    int boom(){
        int boom=0;
        for(int i=0;i<2;i++)
            if(card[i]==card[i+1]&&card[i+1]==card[i+2]&&card[i+2]==card[i+3])boom++;
        return boom;
    }
    int shunzi(){
        int shunzi=0;
        for(int i=0;i<4;i++)
            if(card[i+1]-card[i]==1)shunzi++;
        return shunzi;
    }
}CARDS[MAX];
void getcards(int c[5],string s)	//将字符串s转换为5张牌
{
    int size=s.size();
    int index=0;//不能直接用i，因为有10这张牌
    for(int i=0; i<size; i++)
    {
        if(s[i]>='2'&&s[i]<='9')//2到9
            c[index]=s[i]-'0';
        else if(s[i]=='1')	//10特殊处理
        {
            c[index]=10;
            i++;
        }
        else if(s[i]=='A')	c[index]=1;
        else if(s[i]=='J')	c[index]=11;
        else if(s[i]=='Q')	c[index]=12;
        else if(s[i]=='K')	c[index]=13;
        index++;
    }
}
int main(){
    //G为一组的人数
    ios::sync_with_stdio(false);
    while (cin>>G){
        for(int i=0;i<G;++i){
            string temp_c;
            cin>>CARDS[i].name>>temp_c;
            getcards(CARDS[i].card,temp_c);
            CARDS[i].get_firstlv();
            CARDS[i].get_secondlv();
        }
        sort(CARDS,CARDS+G);
        for(int i=0;i<G;++i){
            cout<<CARDS[i].name<<endl;//"  "<<CARDS[i].firstlv<<"  "<<CARDS[i].secondlv<<endl;
        }
    }
}