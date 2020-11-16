//
// Created by 冯灏 on 5/17/20.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct node{
    int parent;
    int weight;
    vector<int> children;
};
node Nodes[6010];
int f[6010][2];
bool cal[6010];//是否计算过f[i][0]&f[i][1]
void getF(int index){
    if(Nodes[index].children.empty()){
        f[index][0]=0;
        f[index][1]=Nodes[index].weight;
        cal[index]=true;
        return;
    }
    f[index][1]=Nodes[index].weight;
    vector<int>::iterator it=Nodes[index].children.begin();
    for (it;it!=Nodes[index].children.end();++it) {
        if(!cal[*it]){
            getF(*it);
        }
        f[index][0]+=max(f[*it][0],f[*it][1]);
        f[index][1]+=f[*it][0];
    }
    cal[index]=true;
}
void init(int n){
    //谁是根结点?==>并查集?==>向上找就行
    for (int i = 0; i <=n ; ++i) {
        f[i][0]=f[i][1]=0;
        cal[i]=false;
    }
}
int getRoot(int s){
    while (Nodes[s].parent!=-1){
        s=Nodes[s].parent;
    }
    return s;
}
int main(){
    int N;
    while(cin>>N) {
        if(N==0)break;
        int L, K;
        for (int i = 1; i <= N; ++i) {
            cin >> Nodes[i].weight;
            Nodes[i].parent=-1;
        }
        for (int i = 1; i < N; ++i) {
            cin >> L >> K;
            Nodes[K].children.push_back(L);
            Nodes[L].parent = K;
        }
        init(N);
        int root=getRoot(1);
        getF(root);
        cout<<max(f[root][0],f[root][1])<<endl;
    }
}