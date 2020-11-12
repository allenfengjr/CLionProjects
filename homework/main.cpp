/*
 *
 *
 * Created by 冯灏 on 3/3/20.
 *此题尝试使用DFS来做，BFS同b题一样
 *这个题不适合用DFS，原因是求最短路径，我理解错了题目，不是路径是唯一的，而是最短路径是唯一的，也就是说路径可能有多条
 * 所以BFS是一层层搜的，本身就可以确保找到的是最短路径，DFS是深度优先搜索，想要求最短非常复杂
 */


#include<iostream>
#include "stack"
#include <queue>
/*
using namespace std;
struct node{
    int x;
    int y;
    int preid;
    int step;
};
int visit[5][5];
int MAZE[5][5];
int nextmove[4][2]={{0,1},{0,-1},{1,0},{-1,0}};//down,up,right,left
int totalstep=0;
int totalid=0;
node thepath[20];
queue<node> nodequeue;
int step=0;
bool can_reach(int x,int y) {
    return MAZE[x][y] == 0;
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
void BFS(int x,int y){
    int head=0;
    int end=1;
    node now_node;now_node.preid=now_node.x=now_node.y=now_node.step=0;
    nodequeue.push(now_node);
    while(!nodequeue.empty()){
        thepath[head]=nodequeue.front();
        now_node=nodequeue.front();
        head++;
        nodequeue.pop();
        //取出队列顶的
        for(int i=0;i<4;i++){
            int nextx=now_node.x+nextmove[i][0];
            int nexty=now_node.y+nextmove[i][1];
            if(in_maze(nextx,nexty)&&can_reach(nextx,nexty)&&never_visit(nextx,nexty)){
                //可到达新的点
                node next_node=now_node;
                visit[nextx][nexty]=1;
                next_node.x=nextx;
                next_node.y=nexty;
                next_node.preid=head-1;
                next_node.step++;
                nodequeue.push(next_node);
                thepath[end]=next_node;
                end++;
                if(nextx==4&&nexty==4){
                    //到达目标
                    totalstep=next_node.step;
                    totalid=end;
                    return;
                }
            }
        }
    }
}
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>MAZE[i][j];
            visit[i][j]=0;
            //initialize
        }
    }
    visit[0][0]=1;
    BFS(0,0);
    int* preidlist=new int[totalstep+1];
    preidlist[totalstep]=totalid-1;
    for(int i=totalstep-1;i>0;i--){
        preidlist[i]=thepath[preidlist[i+1]].preid;
    }
    //cout<<"(0, 0)"<<endl;
    for(int i=0;i<=totalstep;i++){
        cout<<"("<<thepath[preidlist[i]].x<<", "<<thepath[preidlist[i]].y<<")"<<endl;
    }

}
*/