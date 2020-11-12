//
// Created by haofeng on 6/1/20.
//
/*
#include <iostream>
#include <string.h>
using namespace std;
//这个题简单来讲,把字典数的数据结构简化成二叉树是可以做的
bool subtrue=false;
struct Trie{
    static const int N=1010,charset=2;
    int tot,root,child[N][charset],flag[N];
    Trie(){
        memset(child,-1, sizeof(child));
        root=tot=0;
    }
    void clear(){
        memset(child,-1, sizeof(child));
    }
    void insert(string s){
        int now=root;
        for (int i = 0; s[i] ; ++i) {
            int x=s[i]-'0';
            if(child[now][x]==-1){
                //没有到达过这个节点的
                child[now][x]=++tot;
                flag[now]=0;
            }
            else if(flag[child[now][x]]==1){
                //如果now有子节点是完整的,且重复了,那么说明有前缀
                subtrue=true;
            }
            now=child[now][x];
        }
        flag[now]=1;
    }
};
Trie TR;
int main(){
    int k=0;
    subtrue=false;
    char str[100];
    while (cin>>str){
        if(strcmp(str,"9")==0){
            k++;
            if(subtrue){
                cout<<"Set "<<k<<" is not immediately decodable"<<endl;
            }
            else{
                cout<<"Set "<<k<<" is immediately decodable"<<endl;
            }
            subtrue=false;
            TR.clear();
        }
        else{
            TR.insert(str);
        }
    }
}
 */