//
// Created by haofeng on 5/27/20.
//
/*
#include <iostream>
#include <string.h>
#include <string>
#include <hash_map>
#include <map>
using namespace std;
map<int,int> zhouyumap;
map<int,int> shuomingmap;
string zhouyu[100010];
string shuoming[100010];

string s;
int IND;
hash<string> HASH;
pair<int, int> tmppair;
int hash_value;
string zy;
string sm;
int rightkuohao;

int N;
string tmp;
map<int, int>::iterator it;
int aim_value;
int main() {
    IND=0;
    while (getline(cin, s)) {
        if (s == "@END@")break;
        IND++;
        rightkuohao = s.find_first_of("]");
        zy= s.substr(0, rightkuohao + 1);
        sm= s.substr(rightkuohao + 2, s.size() - rightkuohao - 2);
        zhouyu[IND] = zy;
        shuoming[IND] = sm;
        hash_value= HASH(zy);
        tmppair.first=hash_value;
        tmppair.second=IND;
        zhouyumap.insert(tmppair);
        hash_value = HASH(sm);
        tmppair.first=hash_value;
        shuomingmap.insert(tmppair);
    }
    cin >> N;
    getline(cin,s);

    for (int i = 0; i < N; ++i) {
        getline(cin, tmp);
        //cout<<"TMP"<<tmp<<endl;
        if (tmp[0] == '[') {
            //咒语
             aim_value= HASH(tmp);
            if ((it = zhouyumap.find(aim_value)) != zhouyumap.end()) {
                //找到了
                cout << shuoming[it->second] << endl;
            } else {
                cout << "what?" << endl;
            }
        } else {
            //说明
            aim_value = HASH(tmp);
            if ((it = shuomingmap.find(aim_value)) != shuomingmap.end()) {
                //找到了
                cout << zhouyu[it->second].substr(1,zhouyu[it->second].size()-2) << endl;
            } else {
                cout << "what?" << endl;
            }
        }
    }
}
 */