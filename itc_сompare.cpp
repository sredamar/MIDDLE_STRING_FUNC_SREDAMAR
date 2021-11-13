#include "middle_str.h"
bool itc_compare(string s1, string s2) {
    long long len1 = itc_len_middle(s1), len2 = itc_len_middle(s2), i = 0, counter = 0;
        if (len1 == len2) {
        while (s1[i] != '\0') {
            if (s1[i] == s2[i])
                counter ++;
            i++;}}
        if (counter == len1) {
            return true;}
        else {
            return false;}}
