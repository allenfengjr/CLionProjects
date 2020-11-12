//
// Created by 冯灏 on 6/3/20.
//

#include <iostream>
using namespace std;
int main(){
    try {
        cout<<1/0;
    }
    catch (exception e){
        cout<<"??"<<endl;
    }

}