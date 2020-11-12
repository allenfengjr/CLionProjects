//
// Created by 冯灏 on 3/7/20.
//
/*
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
struct card{
    int num;//字母转化成数字
    int color;//花色转化成数字
};
int num_transformation(char ch){//从牌面到数字
    switch (ch){
        case 'T':{return 10;}
        case 'J':{return 11;}
        case 'K':{return 13;}
        case 'Q':{return 12;}
        case 'A':{return 14;}
        default:
            return ch-48;//看来少不了...
    }
}
char re_num_transformation(int num){//从牌的花色到数字
    switch (num){
        case 10:{return 'T';}
        case 11:{return 'J';}
        case 13:{return 'K';}
        case 12:{return 'Q';}
        case 14:{return 'A';}
        default:
            return num+48;//转化数字只能这样
    }
}
int color_transformation(char ch){//从数字倒牌面
    switch (ch){
        case 'C':{return 1;}
        case 'D':{return 2;}
        case 'S':{return 3;}
        case 'H':{return 4;}
        default:
            return -1;
    }
}
char re_color_transformation(int num){//从数字到花色
    switch (num){
        case 1:{return 'C';}
        case 2:{return 'D';}
        case 3:{return 'S';}
        case 4:{return 'H';}
        default:
            return -1;
    }
}
int weizhi(char ch){//定义SWNE的次序，因为总是先输出S，所以S定为第一个
    switch (ch){
        case 'S':{return 0;}
        case 'W':{return 1;}
        case 'N':{return 2;}
        case 'E':{return 3;}
        default:
            return -1;
    }
}
bool thecomparing(card&c1,card&c2){
    if(c1.color!=c2.color){ return c1.color<c2.color;}
    return c1.num<c2.num;
}
int main(){
    vector<card> four_cards[4];//四个人，每人十三张牌
    while (true){//考虑过用scanf，但那样不好突出开头的选方位
        char start;cin>>start;//cout<<"start:"<<start<<endl;
        if(start=='#') return 0 ;
        int st=weizhi(start);
        for(int i=0;i<52;i++){
            char color,number;cin>>color>>number;
            card temp_cards;
            temp_cards.num=num_transformation(number);
            temp_cards.color=color_transformation(color);
            four_cards[(i+1+st)%4].push_back(temp_cards);
        }
        for(int i=0;i<4;i++){
            sort(four_cards[i].begin(),four_cards[i].end(),thecomparing);
        }

        printf("%s","South player:\n");
        printf("%s","+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
        vector<card>::iterator it;
        for(it=four_cards[0].begin();it!=four_cards[0].end();it++){
            cout<<"|"<<re_num_transformation((*it).num)<<" "<<re_num_transformation((*it).num);
        }
        cout<<"|"<<endl;//输出第一行牌面
        for(it=four_cards[0].begin();it!=four_cards[0].end();it++){
            cout<<"| "<<re_color_transformation((*it).color)<<" ";
        }//输出花色
        cout<<"|"<<endl;
        for(it=four_cards[0].begin();it!=four_cards[0].end();it++){
            cout<<"|"<<re_num_transformation((*it).num)<<" "<<re_num_transformation((*it).num);
        }
        cout<<"|"<<endl;//输出第二行牌面
        printf("%s","+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");

        printf("%s","West player:\n");
        printf("%s","+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
        for(it=four_cards[1].begin();it!=four_cards[1].end();it++){
            cout<<"|"<<re_num_transformation((*it).num)<<" "<<re_num_transformation((*it).num);
        }
        cout<<"|"<<endl;//输出第一行牌面
        for(it=four_cards[1].begin();it!=four_cards[1].end();it++){
            cout<<"| "<<re_color_transformation((*it).color)<<" ";
        }//输出花色
        cout<<"|"<<endl;
        for(it=four_cards[1].begin();it!=four_cards[1].end();it++){
            cout<<"|"<<re_num_transformation((*it).num)<<" "<<re_num_transformation((*it).num);
        }
        cout<<"|"<<endl;//输出第二行牌面
        printf("%s","+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");

        printf("%s","North player:\n");
        printf("%s","+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
        for(it=four_cards[2].begin();it!=four_cards[2].end();it++){
            cout<<"|"<<re_num_transformation((*it).num)<<" "<<re_num_transformation((*it).num);
        }
        cout<<"|"<<endl;//输出第一行牌面
        for(it=four_cards[2].begin();it!=four_cards[2].end();it++){
            cout<<"| "<<re_color_transformation((*it).color)<<" ";
        }//输出花色
        cout<<"|"<<endl;
        for(it=four_cards[2].begin();it!=four_cards[2].end();it++){
            cout<<"|"<<re_num_transformation((*it).num)<<" "<<re_num_transformation((*it).num);
        }
        cout<<"|"<<endl;//输出第二行牌面
        printf("%s","+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");

        printf("%s","East player:\n");
        printf("%s","+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");
        for(it=four_cards[3].begin();it!=four_cards[3].end();it++){
            cout<<"|"<<re_num_transformation((*it).num)<<" "<<re_num_transformation((*it).num);
        }
        cout<<"|"<<endl;//输出第一行牌面
        for(it=four_cards[3].begin();it!=four_cards[3].end();it++){
            cout<<"| "<<re_color_transformation((*it).color)<<" ";
        }//输出花色
        cout<<"|"<<endl;
        for(it=four_cards[3].begin();it!=four_cards[3].end();it++){
            cout<<"|"<<re_num_transformation((*it).num)<<" "<<re_num_transformation((*it).num);
        }
        cout<<"|"<<endl;//输出第二行牌面
        printf("%s","+---+---+---+---+---+---+---+---+---+---+---+---+---+\n");

        cout<<endl;
        for(int i=0;i<4;i++){
            four_cards[i].clear();
        }
    }

}
*/