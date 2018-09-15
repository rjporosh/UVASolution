#include<iostream>
#include<cstring>
#include<string.h>
#include<vector>>
#include<cstdlib>
using namespace std;
int main()
{
    start:
    char str [80];
    int arr [80];
    char intStr[80];
    int b;
      string line,a;            // input line
    vector<char> out;       // gather converted characters
    char res = 0;           // to compute the ascii values
    //std::getline(cin, line);
    cout<<"Your String : ";
    std::getline(cin, line);
