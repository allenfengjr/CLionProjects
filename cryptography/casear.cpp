//
// Created by haofeng on 9/16/20.
//
/*
#include <iostream>
#include <string>

using namespace std;
int main() {
    string plaintxt;
    string ciphertxt;
    //leave or not
    char exitornot='g';
    while(exitornot!='E') {
        cout << "if you want to encrypt,input 1\nelse if you want to decrypt input 2\n\n";
        int E_D;
        cin >> E_D;
        int keys;
        if (E_D == 1) {
            cout << "please input plaintext\n";
            cin >> plaintxt;
            cout << "please input KEY\n";
            cin >> keys;
            for (int i = 0; i < plaintxt.size(); ++i) {
                plaintxt[i] = (plaintxt[i] + keys - 'A') % 26 + 'A';
            }
            cout << "the ciphertext is :  " << plaintxt << endl;
        } else {
            cout << "please input ciphertext\n";
            cin >> ciphertxt;
            cout << "please input KEY\n";
            cin >> keys;
            for (int i = 0; i < ciphertxt.size(); ++i) {
                ciphertxt[i] = (ciphertxt[i] - keys - 'A' + 26) % 26 + 'A';
            }
            cout << "the plaintext is :  " << ciphertxt << endl;
        }
        cout<<"if keep going press G ,if not press E\n";
        cin>>exitornot;
    }
    return 0;
}
*/