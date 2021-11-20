#include "middle_str.h"
bool itc_isFirstInSecond(string s1, string s2) {
    long long checker = itc_find_middle_str(s1, s2);
    if (checker == -1)
        return false;
return true;}
