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
            if (N % 10 >= 7)
            {
                cout << N;
            }
            else if (N % 10 <= 3)
            {

                cout << N + p;
            }
            else
            {
                int z = N % 10;
                if (z >= m)
                {
                    cout << N - m;
                }
                else
                {
                    cout << N + p;
                }
            }
        }
        cout << endl;
    }

    return 0;
}