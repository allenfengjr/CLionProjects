//
// Created by 冯灏 on 3/11/20.
//

#include <iostream>
#include <string>
#include "string"
using namespace std;
int main(){
    string str[10];
    for(int i=0;i<10;i++){
        cin>>str[i];
    }

    for(int i=0;i<10;i++){
        cout<<"username=";
        string s1=str[i].substr(0,8);
        cout<<s1;
        cout<<";password=";
        string s2=str[i].substr(12,8);
        cout<<s2;
        cout<<";"<<endl;
    }
}
