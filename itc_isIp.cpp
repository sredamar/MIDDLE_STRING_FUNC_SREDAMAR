#include "middle_str.h"

bool itc_isIp(string str) {
    long long i = 0, len = itc_len_middle(str), counter = 0;
    int max_dlin = 15;
    string ip = "";
    if ((len > max_dlin) || (str[len - 1] == 46) || (str[0] == 46)) {
        return false;}
    while (str[i] != '\0') {
        if (str[i] == 46) {
            if (str[i - 1] == 46) {
                return false;}
        if (itc_StrChis(ip) > 255) {
            return false;}
        ip = "";
        counter = 0;}
    if (itc_isDigit(str[i] == 0) && (str[i] != 46)) {
        return false;}
    if (str[i] != 46) {
        ip += str[i];
        counter += 1;}
    if (counter > 3) {
        return false;}
    i++;}
return true;}
