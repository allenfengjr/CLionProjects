/*
#include <iostream>
#include <string>
#include "string"
#include <cstring>
using namespace std;
int main() {
    char* str=new char[1];
    scanf("%s",str);
    int n=strlen(str);
    int pre='a';
    int total=0;
    for(int i=0;i<n;i++){
        if(str[i]-pre>13||pre-str[i]>13){
            total+=26-abs(str[i]-pre);
        }
        else{
            total+=abs(str[i]-pre);
        }
        pre=str[i];
    }
    cout<<total;
}
*/