//
// Created by 冯灏 on 3/11/20.
//
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
struct vec{
    int x;int y;//方向向量
};
struct point{
    int x;int y;//点的坐标
};
int  time_exist[40];
bool visit[1000][1000];//(500,500)为原点
int total=1;
int N;
vector<point> all;
stack<point> temp_duichen;
void changev(vec& vi){
    if(vi.x*vi.x+vi.y*vi.y==4){vi.x/=2;vi.y/=2;}
    if(vi.x*vi.x+vi.y*vi.y==8){vi.x/=2;vi.y/=2;}
}//缩放至两边为1
bool visited(int i,int j){
    return visit[i+500][j+500];
}
void duichen(vec& v0,point &p0,point& p){//求对称点
    int A,B,C;//表示直线
    A=v0.y;
    B=-v0.x;
    C=p0.y*v0.x-p0.x*v0.y;
    int a,b;//表示点
    a=p.x;b=p.y;
    point pd;
    pd.x=-(2*A*B*b+(A*A-B*B)*a+2*A*C)/(B*B+A*A);
    pd.y=-(2*A*B*a+(B*B-A*A)*b+2*B*C)/(B*B+A*A);
    if(!visited(pd.x,pd.y)){
        temp_duichen.push(pd);
        visit[pd.x+500][pd.y+500]=true;
    }
}


void thePATH(vec& v,point& p,int time) {
    if (time == N) { return; }
    vec vr;//分裂后其中一个方向向量
    vr.x = v.x + v.y;
    vr.y = -v.x + v.y;
    changev(vr);
    point pend;//分裂前最后走到的位置
    pend.x=p.x+v.x*time_exist[time];
    pend.y=p.y+v.y*time_exist[time];
    thePATH(vr,pend,time+1);
    //先加入对称点，再加入经过的点
    if(!all.empty()){
        vector<point>::iterator it;
        //知道问题了，因为我在vector中不断增加新元素，所以迭代器出问题了
        for(it=all.begin();it!=all.end();it++){
            duichen(v,p,(*it));
        }
    }
    while(!temp_duichen.empty()){
        all.push_back(temp_duichen.top());
        temp_duichen.pop();
    }
    for(int i=1;i<=time_exist[time];i++){
        pend.x=p.x+i*v.x;
        pend.y=p.y+i*v.y;
        if(!visited(pend.x,pend.y)){
            all.push_back(pend);
            visit[pend.x+500][pend.y+500]=true;
        }
    }

}
bool camp(point& p1,point& p2){
    if(p1.x!=p1.y){return p1.x<p2.x;}
    return p1.y<p2.y;
}
int main(){
    all.clear();
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>time_exist[i];
    }
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            visit[i][j]=false;
        }
    }
    vec v0;v0.x=0;v0.y=1;
    point p0;p0.x=0;p0.y=-1;
    thePATH(v0,p0,0);
    vector<point>::iterator it;

    cout<<all.size()<<endl;
}
 */