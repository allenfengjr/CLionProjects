//
// Created by 冯灏 on 3/23/20.
//
/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
char themap[110][110];
bool visit[110][110];
int YMAX,XMAX,Q;
void line(int x1,int y1,int x2,int y2){
    //画线
    if(x1==x2){
        //画横线
        for(int i=min(y1,y2);i<=max(y1,y2);i++){
            if(themap[x1][i]=='-'||themap[x1][i]=='+'){themap[x1][i]='+';}
            else{themap[x1][i]='|';}
        }
    }
    else{
        //画竖线
        for(int i=min(x1,x2);i<=max(x1,x2);i++){
            if(themap[i][y1]=='|'||themap[i][y1]=='+'){themap[i][y1]='+';}
            else{themap[i][y1]='-';}
        }
    }
}
void fill(int x,int y,char matter){
    //填充
    if(visit[x][y])return;
    visit[x][y]=true;
    themap[x][y]=matter;
    //不用判断'+',因为判断上下左右，根本走不到'+'
    if(x-1>=0&&!visit[x-1][y]&&themap[x-1][y]!='|'&&themap[x-1][y]!='-'&&themap[x-1][y]!='+'){
        fill(x-1,y,matter);
    }
    if(x+1<=XMAX&&!visit[x+1][y]&&themap[x+1][y]!='|'&&themap[x+1][y]!='-'&&themap[x+1][y]!='+'){
        fill(x+1,y,matter);
    }
    if(y-1>=0&&!visit[x][y-1]&&themap[x][y-1]!='|'&&themap[x][y-1]!='-'&&themap[x][y-1]!='+'){
        fill(x,y-1,matter);
    }
    if(y+1<=YMAX&&!visit[x][y+1]&&themap[x][y+1]!='|'&&themap[x][y+1]!='-'&&themap[x][y+1]!='+'){
        fill(x,y+1,matter);
    }
    return;
}
void clearmap(){
    for(int i=0;i<XMAX;i++)
        for(int j=0;j<YMAX;j++)
            visit[i][j]=false;
}
int main(){
    cin>>XMAX>>YMAX>>Q;
    //我的定义是行为x，列为y，且左上为原点
    //画出来的时候，(i,j)按外层从XMAX到0，内层从0到YMAX
    for(int i=0;i<XMAX;i++){
        for(int j=0;j<YMAX;j++){
            themap[i][j]='.';
            visit[i][j]=false;
        }
    }
    int t,x0,y0;
    for(int q=0;q<Q;q++){
        cin>>t>>x0>>y0;
        if(t==1){
            char inp;
            cin>>inp;
            fill(x0,y0,inp);
            clearmap();
        }
        else{
            int x1,y1;
            cin>>x1>>y1;
            line(x0,y0,x1,y1);
        }
    }
    for(int j=YMAX-1;j>=0;j--){
        for(int i=0;i<XMAX;i++){
            cout<<themap[i][j];
        }
        cout<<endl;
    }
}
 */