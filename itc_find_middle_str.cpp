#include "middle_str.h"
int itc_find_str(string str1, string str2){
    long long len = itc_len_middle(str1);
    long long length = itc_len_middle(str2);
    long long counter = 0;
    for (long long i = 0; i < len; i++){
        counter = 0;
        if (str1[i] == str2[0]){
        for (long long i1 = 0; i1 < length; i1++){
            if (str1[i + i1] == str2[i1]){
                counter += 1;}}}
        if (counter == length){
            return i;}}
    return (-1);}
