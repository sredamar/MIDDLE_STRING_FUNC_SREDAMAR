#include "middle_str.h"

string itc_slice_middle_str(string str, int s_start, int s_end) {
    long long len1 = itc_len_middle(str);
    string res = "";
    for (int i = s_start; i <= itc_mymin_middle_str(s_end, len1 - 1); i++) {
        res = res + str[i];}
    if (s_end < s_start) {
        return str;}
return res;}
