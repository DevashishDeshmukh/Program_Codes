#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[3], c[3], b, d, tmin=INT16_MAX;
        for (int j = 0; j < 3; j++)
        {
            cin >> a[j];
        }
        cin >> b;
        for (int j = 0; j < 3; j++)
        {
            cin >> c[j];
        }
        cin >> d;
        int time = b + (d / 2);
        if (time >= n)
            cout << "NO" << endl;

        else
        {

            for (int j = 0; j < 3; j++)
            {
                int tm = 0;
                tm += a[j];

                for (int k = 0; k < 3; k++)
                {
                    tm += c[k];
                    if (tm < tmin)
                    {
                        tmin = tm;
                    }
                }
            }
        }
        time += tmin;
        if (time <= n)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    // your code goes here
    return 0;
}
