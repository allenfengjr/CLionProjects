#include <iostream>
#include <queue>
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
const int inf = -1e8; // 根据题目定
const int N = 1e6; // 根据题目定
int n, sum[N];
bool vis[N]={0};
int a,b,c;
int MIN=N,MAX=0;//总的区间
// 前向星存图
int head[N], tot;
struct Edge{
    int to, next, w;
}e[1000000];
void addedge(int v,int u,int w){
    tot++;
    e[tot].w=w;
    e[tot].to=u;
    e[tot].next=head[v];
    head[v]=tot;
}
// 前向星 - spfa 只是改>为<
void spfa(int s) {
    queue<int> q;
    q.push(s);
    sum[s] = 0;
    vis[s] = 1;
    while(!q.empty()) {
        int u = q.front(); q.pop();
        vis[u] = 0;
        for(int i = head[u]; i; i = e[i].next) {
            int v = e[i].to;
            if(sum[v] < sum[u] + e[i].w) {
                sum[v] = sum[u] + e[i].w;
                if(!vis[v]) {
                    q.push(v);
                    vis[v] = 1;
                }
            }
        }
    }
}
int main(){
    cin>>n;
    memset(sum,128, sizeof(sum));
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        MIN=min(MIN,a);
        MAX=max(MAX,b+1);
        addedge(a,b+1,c);//从b+1到a的有向边,a=0
    }
    for(int i=MIN;i<=MAX;i++){
        addedge(i-1,i,0);
        addedge(i,i-1,-1);
    }
    spfa(MIN-1);
    cout<<sum[MAX]<<endl;
    return 0;
}