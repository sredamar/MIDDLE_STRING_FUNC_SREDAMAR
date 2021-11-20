#include "middle_str.h"
string itc_rmFreeSpace(string str){
    string nov = "";
    long long i = 0, dlina = itc_len_middle(nov);
    while(str[i] != '\0'){
        if (((str[i] == ' ') && (str[i - 1] != ' ')) || (str[i] < ' ') || (str[i] > ' '))
            nov += str[i];
        i++;}
        if (nov[0] == ' ') {
            nov = itc_slice_middle_str(nov, 1 , dlina - 1);}
    if((nov[dlina - 1]) == ' ') {
        nov = itc_slice_middle_str(nov, 0 , dlina - 2);}
return nov;}
