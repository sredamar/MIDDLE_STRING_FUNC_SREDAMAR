#include "middle_str.h"

long long itc_len_middle(string str) {
    long long i = 0, counter = 0;
    while (str[i] != '\0') {
        counter ++;
        i++;}
    return counter;}
