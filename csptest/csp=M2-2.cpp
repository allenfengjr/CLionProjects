//
// Created by haofeng on 4/8/20.
//
/*
#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include "string"
using namespace std;
string str;
string substr;
bool noRepeat(string substr1){
    sort(substr1.begin(),substr1.end());
    for(int i=0;i<substr1.length()-1;i++){
        if(substr1[i]==substr1[i+1]&&substr1[i]!='?'){
            return false;
        }
    }
    return true;
}
void change(string& substr2){
    int used[26];
    for(int i=0;i<26;i++){
        used[i]=0;
    }
    for(int i=0;i<26;i++){
        int now=substr2[i];
        if(now!=63){
            used[now-65]=1;
        }
    }
    for(int i=0;i<26;i++){
        if(substr2[i]=='?'){
            for(int j=0;j<26;j++){
                if(used[j]==0){
                    //那个字母的ASCII
                    substr2[i]=j+65;
                    used[j]=1;
                    break;
                }
            }
        }
    }
    //cout<<substr2<<endl;
}
int main(){
    cin>>str;
    int n=str.length();
    int left=0;int right=0;
    bool Find= false;
    while (right>=left&&right<=n){
        substr=str.substr(left,right-left+1);
        sort(substr.begin(),substr.end());
        if(noRepeat(substr)){
            right++;
            if(right-left==26){
                substr=str.substr(left,right-left);
                //确保substr是对的
                Find=true;
                break;//找到
            }
        }
        else{
            left++;
        }
    }
    if(Find){
        change(substr);
        cout<<substr<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
 */