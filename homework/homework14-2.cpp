//
// Created by haofeng on 5/25/20.
//
/*
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;
int q,n,m;
int Nrow[50100];
int Mcol[50100];
string maxtmp[50100];
//把string拿出来就行了
int main(){
    ios::sync_with_stdio(false);

    cin>>q;
    while (q--){
        cin>>n>>m;
        memset(Nrow,0, sizeof(Nrow));
        memset(Mcol,0, sizeof(Mcol));
        int maxrow=-99999;
        int maxcol=-99999;
        //开始是记录一行，但是不靠谱，记录最多有多少个比较好
        for(int i=1;i<=n;++i){
            cin>>maxtmp[i];
        }
        for (int i = 1; i <=n ; ++i) {
            for (int j = 1; j <=m ; ++j) {
                if(maxtmp[i][j-1]=='*'){
                    Nrow[i]++;
                    Mcol[j]++;
                }
            }
            if(maxrow<Nrow[i])maxrow=Nrow[i];
        }
        for (int j = 1; j <=m; ++j) {
            if(maxcol<Mcol[j])maxcol=Mcol[j];
        }
        int max_all=-99999999;
        for(int i=1;i<=n;++i) {
            if(Nrow[i]!=maxrow){continue;}
            for (int j = 1; j <= m; ++j) {
                if(Mcol[j]!=maxcol){continue;}
                if ((Nrow[i] + Mcol[j] + 1>max_all)&&maxtmp[i][j-1] == '.') {
                    max_all = (Nrow[i] + Mcol[j] + 1);
                }
                else if((Nrow[i] + Mcol[j])>max_all&&maxtmp[i][j-1]=='*'){
                    max_all = max(max_all, (Nrow[i] + Mcol[j]));
                }
            }
        }
        cout<<(n+m-max_all)<<endl;
    }
}
*/