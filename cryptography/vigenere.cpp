//
// Created by haofeng on 9/16/20.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    //不构建大矩阵,需要时手动计算即可
    //assume the i-th character of plaintext is m,then the line is m,(m+1)mod26...(m+k)mod26...
    string plaintext;
    string ciphertext;
    string key;
    cout<<"run vigenere input v\nwant some help input h\nto exit input e\n";
    char cmd;cin>>cmd;
    while (cmd!='e') {
        switch (cmd) {
            case 'v': {
                cout<<"please input plaintext\n";
                cin>>plaintext;
                cout<<"please input key\n";
                cin>>key;
                //encrypt
                int kid;
                for (int i=0;i<plaintext.size();++i){
                    kid=i%key.size();
                    plaintext[i]=(plaintext[i]-'a'+(key[kid]-'a')+26)%26+'a';
                }
                cout<<"the ciphertext is :  "<<plaintext<<endl;
                //decrypt
                plaintext = "mthz xegg xz nc eyvs"
                            "itl tppjhfv. dwl msh"
                            "kd cesc yzjug. lhp'z"
                            " bfhue ahjvmy nlasw "
                            "ows, brw dwl xitrd n"
                            "lbwled. Sii's ubnoc."
                            " Mja tlx th suvbce d"
                            "iul ud. Sii wlcas yl"
                            " ed suywy whre. Hpg "
                            "lfwloyh asi iyilrfwm"
                            "iyv. Xi act vfvr spw"
                            "pz bn wlr geadh aoh "
                            "wp hlm eivt hfv lphz"
                            "oow. Dwl jw a vvoe m"
                            "elroes, ays wf tlw s"
                            "ili hpg.";
                key = "alphabet";
                for (int i=0;i<plaintext.size();++i) {
                    int tmp = plaintext[i];
                    if(tmp<='Z'&&tmp>='A'){
                        plaintext[i]=tmp-'A'+'a';
                    }
                    if (tmp<'a'||tmp>'z'){
                        if(tmp!='.'&&tmp!='\''&&tmp!=','){
                            //plaintext[i]=' ';
                        }
                    }
                    else {
                        kid = i % key.size();
                        plaintext[i] = (plaintext[i] - 'a' - (key[kid] - 'a') + 26) % 26 + 'a';
                    }
                }
                cout<<"the plaintext is :  "<<plaintext<<endl;
                for (int i = 0; i < plaintext.size(); ++i) {
                    int tmp = plaintext[i];
                    if(tmp<='Z'&&tmp>='A'){
                        plaintext[i]=tmp+ 'A'-'a';
                    }
                    if (tmp<'a'||tmp>'z'){
                        if(tmp!='.'&&tmp!='\''&&tmp!=','){
                            //plaintext[i]=' ';
                        }
                    }
                }
                cout<<"the plaintext is :  "<<plaintext<<endl;
                break;
            }
            case 'h': {
                cout<<"https://baike.baidu.com/item/维吉尼亚密码/4905472\n";
                break;
            }
            case 'e': {
                return 0;
            }
        }
        cout<<"keep going input v or h\nto exit input e\n";
        cin>>cmd;
    }
}
