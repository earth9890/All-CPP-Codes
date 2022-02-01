#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c, d;
        cin >> a >> b;
        c = a;
        d = b;
        int count1 = 0, count2 = 0, count = 0;
        while (c == d)
        {
            c = c + 1;
            count1++;
        }
        while (a == b)
        {
            a = a | b;
            count2++;
        }
        if (count2 < count1)
        {
            count = count2;
        }
        else
        {
            count = count1;
        }
        cout << count << endl;
    }
    return 0;
}