#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int NLines;
    cin >> NLines;
    string s;

    while (NLines--)
    {

        cin >> s;
        if (s.length() > 10)
        {

            cout << s[0] << s.size() - 2 << s[s.length() - 1] << endl;
        }

        else
        {
            cout << s << endl;
        }
    }
}