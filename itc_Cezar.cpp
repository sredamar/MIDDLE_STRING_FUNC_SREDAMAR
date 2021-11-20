#include "middle_str.h"

string itc_Cezar(string str, int k) {
    long long i = 0;
    string shifr = "";
    if (str == "") {
        return "error";}
    if (k == 0) {
        return str;}
    while (str[i] != '\0'){
        if ((str[i] >= 97) && (str[i] <= 122)) {
            if (str[i] + k > 122) {
                shifr += (str[i] + k - 26);}
            else if (str[i] + k < 97) {
                shifr += (str[i] + k + 26);}
            else {
                shifr += str[i] + k;}
        } else if ((str[i] >= 65) && (str[i] <= 90)) {
            if (str[i] + k > 90) {
                shifr += str[i] + k - 26;}
            else if (str[i] + k < 65) {
                shifr += str[i] + k + 26;}
            else {
                shifr += str[i] + k;}
        } else
            shifr += str[i];
        i++;}
return shifr;}
