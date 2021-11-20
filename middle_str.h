#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

bool itc_isDigit(unsigned char c); //1
unsigned char itc_toUpper(unsigned char c); //2
unsigned char itc_changeCase(unsigned char c); //3
long long itc_len_middle(string str); //dlina_stroki
bool itc_compare(string s1, string s2); //4
int itc_countWords(string str); //5
char itc_sameChar(string str); //7
bool itc_isFirstInSecond(string s1, string s2); //8
int itc_find_middle_str(string str1, string str2); //podstroka
string itc_Cezar(string str, int k); //9
string itc_slice_middle_str(string str, int s_start, int s_end); //help_func_10
int itc_mymin_middle_str(int a, int b); //minimum_chisel_dlya_10func
string itc_rmFreeSpace(string str); //10
bool itc_isIp(string str); //11
long long itc_StrChis(string str); //str_v_chislo
#endif // MIDDLE_STR_H_INCLUDED
