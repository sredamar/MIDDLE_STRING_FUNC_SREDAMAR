#include "middle_str.h"
long long itc_StrChis(string str){
    long long sch = 0, i = 0, symb = 0;
    while (str[i] != '\0') {
        symb = str[i] - 48;
        sch = sch * 10 + symb;
        i++;}
return sch;}
