//
// Created by haofeng on 5/15/20.
//
/*
#include <iostream>
using namespace std;
int n;int k;
int main(){
    int T;cin>>T;
    while (T--) {
        cin >> n >> k;
        if (n % 2 == 1 && k % 2 == 0) {
            cout << "NO" << endl;
        } else if (n % 2 == 0 && k % 2 == 1) {
            //全偶数
            if (n < 2 * k) {
                cout << "NO" << endl;
            } else {
                cout<<"YES"<<endl;
                for (int i = 1; i < k; ++i) {
                    cout << 2 << " ";
                    n -= 2;
                }
                cout << n << endl;
            }
        } else {
            if (n < k) {
                cout << "NO" << endl;
            } else {
                cout<<"YES"<<endl;
                for (int i = 1; i < k; ++i) {
                    cout << 1 << " ";
                    n--;
                }
                cout << n << endl;
            }
        }
    }
}
*/