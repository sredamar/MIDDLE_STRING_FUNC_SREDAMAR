 #include "middle_str.h"

 unsigned char itc_changeCase(unsigned char c) {
    unsigned char n_reg = c + 32;
    if ((c >= 'a') && (c <= 'z')) {
        return itc_toUpper(c);}
    else if ((c >= 'A') && (c <= 'Z')) {
        return n_reg;}
    else {
        return c;}
return 0;}
