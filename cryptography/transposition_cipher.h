//
// Created by 冯灏 on 9/23/20.
//
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
#ifndef CRYPTOGRAPHY_TRANSPOSITION_CIPHER_H
#define CRYPTOGRAPHY_TRANSPOSITION_CIPHER_H
const int key_length = 6;//密钥的长度
std::string encrypt(const std::string & plaintext, const std::string & permutation){
    int rank[key_length];
    char textArray[plaintext.length()/key_length][key_length];
    for (int i = 0; i < key_length; ++i) {
        //得到加密时，明文列的次序
        char aim='A'+i;
        rank[i]=permutation.find(aim);
    }

    for (int i = 0; i < plaintext.length(); ++i) {
        textArray[i/key_length][i%key_length]=plaintext[i];
    }
    std::string res;
    for (int i = 0; i < key_length; ++i) {
        for (int j = 0;j < plaintext.length() / key_length ; ++j){
            //按对应列写入密文
            res += textArray [j][rank[i]];
        }
    }
    return res;
}
std::string decrypt(const std::string & ciphertext, const std::string & permutation){
    int rank[key_length];
    char textArray[key_length][ciphertext.length()/key_length];
    for (int i = 0; i < key_length; ++i) {
        //得到解密时，密文列的次序
        rank[i] = permutation[i]-'A';
    }
    int col_len = ciphertext.length()/key_length;
    for (int i = 0; i < ciphertext.length(); ++i) {
        //按列写入矩阵
        textArray[i/col_len][i%col_len]=ciphertext[i];
    }
    std::string res;
    //轮流按顺序填入解密后明文
    for (int j = 0; j < col_len ; ++j) {
        for (int i=0;i<key_length;++i){
            res += textArray[rank[i]][j];
        }
    }
    return res;
}
#endif //CRYPTOGRAPHY_TRANSPOSITION_CIPHER_H
