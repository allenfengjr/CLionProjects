//
// Created by haofeng on 4/29/20.
//
/*
#include <iostream>
#include <string>
using namespace std;
char code(char ch){
    if(ch>='A'&&ch<='Z'){
        if(ch>='A'&&ch<'F'){
            //密文中的前五位,对应明文的最后五位
            return ch+21;
        }
        else{
            return ch-5;
        }
    }
    else{
        return ch;
    }
}
string CODE(string ori){
    string str=ori;
    for (int i = 0; i < ori.size(); ++i) {
        str[i]=code(ori[i]);
    }
    return str;
}
int main(){
    string c;
    //getchar();
    getline(cin,c);
    cout<<CODE(c);
}
 */