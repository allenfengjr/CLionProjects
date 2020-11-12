//
// Created by 冯灏 on 3/4/20.
//

//
// Created by 冯灏 on 3/3/20.
//此题尝试使用DFS来做，BFS同b题一样
//

#include<iostream>
using namespace std;
int visit[5][5];
int MAZE[5][5];
bool can_reach(int x,int y){
    return MAZE[x][y]==1;
    //judge if can reach
}
bool in_maze(int x,int y){
    return 0<=x&&x<5&&0<=y&&y<5;
    //judge if (x,y)in the maze
}
bool never_visit(int x,int y){
    return visit[x][y]==0;
    //return if it visited
}
bool DFS(int x,int y){
    //思考问题，如何才能让最终的路径输出，而断头路不输出？
    //DFS使用void可能不是好的选择，内部要有判断的地方
    //cout<<"now point is ("<<x<<", "<<y<<")"<<endl;
    if(x==4&&y==4){
        return true;
        //find the end
    }
    if(in_maze(x+1,y)&&never_visit(x+1,y)&&can_reach(x+1,y)){
        //right
        if(DFS(x+1,y)){
            cout<<"now point is ("<<x+1<<", "<<y<<")"<<endl;
        }
    }
    if(in_maze(x-1,y)&&never_visit(x-1,y)&&can_reach(x-1,y)){
        //left
        if(DFS(x-1,y)){
            cout<<"now point is ("<<x-1<<", "<<y<<")"<<endl;
        }
    }
    if(in_maze(x,y-1)&&never_visit(x,y-1)&&can_reach(x,y-1)){
        //up
        if(DFS(x,y-1)){
            cout<<"now point is ("<<x<<", "<<y-1<<")"<<endl;
        }
    }
    if(in_maze(x,y+1)&&never_visit(x,y+1)&&can_reach(x,y+1)){
        //down
        if(DFS(x,y+1)){
            cout<<"now point is ("<<x<<", "<<y+1<<")"<<endl;
        }
    }
    return false;
}
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>MAZE[i][j];
            visit[i][j]=0;
            //initialize
        }
    }
    DFS(0,0);
}
