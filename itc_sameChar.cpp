#include "middle_str.h"

char itc_sameChar(string str) {
    char symbol = ' ';
    long long i = 0, len = itc_len_middle(str), counter = 1;
    while(str[i] != '\0'){
        for (long long a = i + 1; str[a] != '\0'; a++){
        if ((str[i] == str[a]) && (str[i] != ' ')) {
            counter += 1;}}
        if ( counter == 2){
             symbol = str[i];
             return symbol;}
    counter = 1;
    i++;}
    return '0';}
