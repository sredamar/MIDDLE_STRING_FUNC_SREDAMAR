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
bool itc_isFirstInSecond(string s1, string s2); //8
int itc_find_middle_str(string str1, string str2); //podstroka
string itc_Cezar(string str, int k);
#endif // MIDDLE_STR_H_INCLUDED
