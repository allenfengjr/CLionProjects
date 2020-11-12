//
// Created by haofeng on 5/8/20.
//
/*
#include <iostream>
#include <algorithm>
#include <queue>
struct vertex{
    int r,c,l;
};
vertex Vstart,Vend;
using namespace std;
int L,R,C;

int T=999999;
char maze[31][31][31];
bool visit[31][31][31];
int dis[31][31][31];
bool inmaze(int row,int col,int height){
    return (row>0&&row<=R)&&(col>0&&col<=C)&&(height>0&&height<=L);
}
bool vis(int row,int col,int height){
        return visit[row][col][height];
}

//感觉递归还是不好做，还是宽搜吧，
 //这是深搜不是宽搜

void solve(){
    queue<vertex> V;
    V.push(Vstart);
    while (!V.empty()){
        vertex v=V.front();
        V.pop();
        int r=v.r;int c=v.c;int l=v.l;int t=dis[r][c][l];
        vertex nv;
        //cout<<r<<"   "<<c<<"  "<<l<<endl;
        if(inmaze(r-1,c,l)&&!vis(r-1,c,l)&&maze[r-1][c][l]!='#'){
            visit[r-1][c][l]=true;
            dis[r-1][c][l]=t+1;
            nv.r=r-1;nv.c=c;nv.l=l;
            V.push(nv);
        }
        if(inmaze(r+1,c,l)&&!vis(r+1,c,l)&&maze[r+1][c][l]!='#'){
            visit[r+1][c][l]=true;
            dis[r+1][c][l]=t+1;
            nv.r=r+1;nv.c=c;nv.l=l;
            V.push(nv);
        }
        if(inmaze(r,c-1,l)&&!vis(r,c-1,l)&&maze[r][c-1][l]!='#'){
            visit[r][c-1][l]=true;
            dis[r][c-1][l]=t+1;
            nv.r=r;nv.c=c-1;nv.l=l;
            V.push(nv);
        }
        if(inmaze(r,c+1,l)&&!vis(r,c+1,l)&&maze[r][c+1][l]!='#'){
            visit[r][c+1][l]=true;
            dis[r][c+1][l]=t+1;
            nv.r=r;nv.c=c+1;nv.l=l;
            V.push(nv);
        }
        if(inmaze(r,c,l-1)&&!vis(r,c,l-1)&&maze[r][c][l-1]!='#'){
            visit[r][c][l-1]=true;
            dis[r][c][l-1]=t+1;
            nv.r=r;nv.c=c;nv.l=l-1;
            V.push(nv);
        }
        if(inmaze(r,c,l+1)&&!vis(r,c,l+1)&&maze[r][c][l+1]!='#'){
            visit[r][c][l+1]=true;
            dis[r][c][l+1]=t+1;
            nv.r=r;nv.c=c;nv.l=l+1;
            V.push(nv);
        }
    }
}
int main(){
    while (cin>>L>>R>>C){
        if(L==R&&R==C&&C==0){break;}
        T=99999;
        for (int l = 1; l <=L ; ++l) {
            for (int r = 1; r <=R ; ++r) {
                for (int c = 1; c <=C ; ++c) {
                    cin>>maze[r][c][l];
                    visit[r][c][l]=false;
                    if(maze[r][c][l]=='S'){
                        Vstart.l=l;Vstart.r=r;Vstart.c=c;
                        visit[r][c][l]=true;
                        dis[r][c][l]=0;
                    }
                    if(maze[r][c][l]=='E'){
                        Vend.l=l;Vend.c=c;Vend.r=r;
                    }
                }
            }
        }
        solve();
        if(visit[Vend.r][Vend.c][Vend.l]){
            cout<<"Escaped in "<<dis[Vend.r][Vend.c][Vend.l] <<" minute(s)."<<endl;
        }
        else{
            cout<<"Trapped!"<<endl;
        }
    }
}
*/