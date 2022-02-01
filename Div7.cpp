#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (N % 7 == 0 && N % 10 != 0)
        {
            cout << N;
        }
        else
        {
            int m = N % 7;
            int p = 7 - m;

            /*  int b = 7 * floor(N / 7);
             cout << b; */
            if (N % 7 == 0 && p % 10 != 0)
            {
                cout << p;
            }
            else
            {
                p = 0;
                p = N - m;
                if (p % 7 == 0 && p % 10 != 0)
                {
                    cout << p;
                }
            }
        }
        cout << endl;
    }

    return 0;
}