#include "middle_str.h"

int itc_countWords(string str){
    int counter = 0;
    bool proverka = false;
    for(long long i = 0; i < itc_len_middle(str); i++){
        if(str[i] == ' ') {
            proverka = false;}
        if(str[i] != ' ' && ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) {
            proverka = true;}
        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && (proverka == true)){
            while((str[i] != ' ') && (str[i] != '\0')){
                i++;}
            proverka = false;}
        if(((str[i + 1] == ' ') || (str[i + 1] == '\0')) && (proverka == true)){
            counter++;}}
return counter;}

