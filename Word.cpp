#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int countLow = 0, countHigh = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            countHigh++;
        }
        else
        {
            countLow++;
        }
    }
    if (countHigh > countLow)
    {
        char ch;
        for (int i = 0; i < s.size(); i++)
        {
            ch = toupper(s[i]);
            cout << ch;
        }
    }
    else
    {
        char ch;
        for (int i = 0; i < s.size(); i++)
        {
            ch = tolower(s[i]);
            cout << ch;
        }
    }
    return 0;
}