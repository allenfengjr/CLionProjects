//
// Created by haofeng on 4/27/20.
//
/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int nowPlayer=0;//当前哪个玩家
string cmd;
int n;
struct summon{
    int attack=0;
    int health=0;
    bool death=false;
    summon(){};
    summon(int attack,int health){
        this->attack=attack;
        this->health=health;
    }
    void att2sum(summon& sum){
        //this attack that
        sum.health-=this->attack;
        this->health-=sum.attack;
        //判断是否死亡
        if(sum.health<=0)sum.death= true;
        if(this->health<=0)this->death=true;
    }
};
struct players{
    summon SUMM[10];//随从
    bool haveSU[10];//
    int health=30;
    players(){
        SUMM[8];
        haveSU[8];
        for (int i = 0; i < 10; ++i) haveSU[i]=false;
    }
    void addsummon(summon su,int pos);
    void clearsummon();
};
void players::clearsummon(){
    for (int i = 1; i <=7 ; ++i) {
        if(haveSU[i]&&SUMM[i].death){
            //向左边移动
            for (int j = i; j <=7 ; ++j) {
                //改变存在情况和随从
                haveSU[j]=haveSU[j+1];
                SUMM[j]=SUMM[j+1];
            }
        }
    }
    for (int i = 1; i <=7 ; ++i) {
        if(SUMM[i].health<=0)haveSU[i]=false;
    }
}
void players::addsummon(summon su,int pos) {
    if(this->haveSU[pos]=true){
        //先移动
        for (int i = 6; i >=pos ; --i) {
            //肯定能容得下,所以最多六个
            if(haveSU[i]){
                SUMM[i+1]=SUMM[i];
                haveSU[i+1]=haveSU[i];
            }
        }
    }
    SUMM[pos]=su;
}
players PLAYS[2];
int main(){
    cin>>n;
    summon su;
    int pos;
    int attfrom,attto;
    for (int i = 0; i <n ; ++i) {
        cin>>cmd;
        if(cmd=="summon"){

            cin>>pos>>su.attack>>su.health;
            PLAYS[nowPlayer].addsummon(su,pos);
        }
        if(cmd=="end"){
            nowPlayer^=1;
        }
        if(cmd=="attack"){
            cin>>attfrom>>attto;
            if(attto==0)PLAYS[nowPlayer^1].health-=PLAYS[nowPlayer].SUMM[attfrom].attack;
            else{PLAYS[nowPlayer].SUMM[attfrom].att2sum(PLAYS[nowPlayer^1].SUMM[attto]);}
        }
        PLAYS[nowPlayer].clearsummon();
        PLAYS[nowPlayer^1].clearsummon();
    }
    if(PLAYS[0].health>0&&PLAYS[1].health<=0)cout<<1<<endl;
    else if(PLAYS[0].health<=0&&PLAYS[1].health>0)cout<<-1<<endl;
    else cout<<0<<endl;
    cout<<PLAYS[0].health<<endl;
    vector<int> sv;
    for (int i = 1; i <=7 ; ++i) {
        if(PLAYS[0].haveSU[i])sv.push_back(PLAYS[0].SUMM[i].health);
    }
    cout<<sv.size();
    for (int i = 0; i <sv.size() ; ++i) {
        cout<<" "<<sv[i];
    }
    cout<<endl;
    sv.clear();
    cout<<PLAYS[1].health<<endl;
    for (int i = 1; i <=7 ; ++i) {
        if(PLAYS[1].haveSU[i])sv.push_back(PLAYS[1].SUMM[i].health);
    }
    cout<<sv.size();
    for (int i = 0; i <sv.size() ; ++i) {
        cout<<" "<<sv[i];
    }
}
*/