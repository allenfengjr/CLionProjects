
#include "transposition_cipher.h"
#include "transposition_cipher.h"
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
/*
std::string encrypt(const std::string & plaintext, const std::string & permutation);
std::string decrypt(const std::string & ciphertext, const std::string & permutation);

template <class T> const T& min (const T& a, const T& b){
    if (b<a) return b; else return a;
}

bool is_plaintext_valid(const std::string & plaintext){
    for (std::string::const_iterator it=plaintext.begin(); it!=plaintext.end(); ++it){
        if (!(((unsigned char)(*it) < 128) && isprint(*it))) {
            return false;
        }
    }

    return plaintext.size() % 6 ==0;
}

bool is_permutation_valid(const std::string & permutation){
    std::vector<char> chars;
    chars.assign(permutation.begin(),permutation.end());

    std::sort(chars.begin(),chars.end());

    std::string sortedString;
    sortedString.assign(chars.begin(),chars.end());

    return sortedString.compare("ABCDEF")==0;
}

int main(){
    int unused_variable = min(1,2);

    std::string plaintext;
    std::cout<<"输入明文字符串，长度为 6 的倍数：";
    std::cin>>plaintext;

    if (!is_plaintext_valid(plaintext)){
        std::cout<<"输入格式错误。"<<std::endl;
        return 1;
    }

    std::string permutation;
    std::cout<<"输入密钥字符串，须为ABCDEF的一种全排列：";
    std::cin>>permutation;

    if (!is_permutation_valid(permutation)){
        std::cout<<"输入格式错误。"<<std::endl;
        return 1;
    }

    std::string ciphertext = encrypt(plaintext, permutation);
    std::cout<<"密文为："<<ciphertext<<std::endl;

    std::string newPlainText = decrypt(ciphertext, permutation);
    std::cout<<"解密后的明文为："<<newPlainText<<std::endl;

    if (newPlainText.compare(plaintext)!=0){
        std::cout<<"明文不一致。"<<std::endl;
        return 2;
    }

    return 0;
}
*/