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
bool itc_symbol_middle(string str);
string itc_slice_middle(string str, int s_start, int s_end);
int itc_mymin_middle(int a, int b);
#endif // MIDDLE_STR_H_INCLUDED
