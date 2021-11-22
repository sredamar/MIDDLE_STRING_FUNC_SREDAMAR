#include "middle_str.h"
string itc_maxCharWord(string str){
    string st, maxx = "";
    bool proverka = false;
    if(itc_countWords(str) > 1){
    for(long long i = 0; i <= itc_len_middle(str); i++){
        if(str[i] == ' ')
            proverka = false;
        if(str[i] != ' ' && ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
            proverka = true;
        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && proverka == true){
            while(str[i] != ' ' && str[i] != '\0'){
                i++;}
            proverka = false;
            st = "";}
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            st += str[i];
        if((str[i + 1] == ' ' || str[i + 1] == '\0') && proverka == true){
            if(itc_len_middle(st) > itc_len_middle(maxx))
                maxx = st;
            st = "";}}
    return maxx;}
    return "error";}
