#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
long long itc_len_middle(string str);
bool itc_compare(string s1, string s2);
int itc_countWords(string str);
char itc_sameChar(string str);
#endif // MIDDLE_STR_H_INCLUDED