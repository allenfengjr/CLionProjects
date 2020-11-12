//
// CreAted by haofeng on 5/20/20.
//
/*
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,A,B,C;
int wintime;
string s;
char RPS[110];
int main()
{
    int T;
    cin>>T;
    while(T--){
        wintime=0;
        memset(RPS,0,sizeof(RPS));
        cin>>n>>A>>B>>C;
        cin>>s;
        //不要直接输出,太复杂,先记下来
        for(int i=0;i<n;i++){
            if(s[i]=='R'&&B>0)
                B--,wintime++,RPS[i]='P';
            if(s[i]=='P'&&C>0)
                C--,wintime++,RPS[i]='S';
            if(s[i]=='S'&&A>0)
                A--,wintime++,RPS[i]='R';
        }
        int tmp=n/2;
        if(n%2==1)tmp++;
        if(wintime>=tmp){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
                if(RPS[i])
                    cout<<RPS[i];
                else{
                    if(A>0) cout<<'R',A--;
                    else if(B>0) cout<<'P',B--;
                    else if(C>0) cout<<'S',C--;
                }
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}

*/