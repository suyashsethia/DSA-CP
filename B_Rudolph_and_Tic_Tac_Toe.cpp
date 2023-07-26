#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int ans = -1;
        int a[10];
        for (int i = 0; i < 9; i++)
        {
            char c;
            cin >> c;
            if (c == 'X')
            {
                a[i] = 1;
            }
            else if (c == 'O')
            {
                a[i] = 2;
            }
            else if (c == '+')
            {
                a[i] = 3;
            }
            else if (c == '.')
            {
                a[i] = -1;
            }
        }

        if (a[0] > 0 && a[0] == a[1] && a[1] == a[2])
        {
            ans = a[0];
        }
        else if (a[3] > 0 && a[3] == a[4] && a[5] == a[4])
        {
            ans = a[3];
        }
        else if (a[6] > 0 && a[6] == a[7] && a[7] == a[8])
        {
            ans = a[6];
        }
        else if (a[0] > 0 && a[0] == a[3] && a[0] == a[6])
        {
            ans = a[0];
        }
        else if (a[4] > 0 && a[4] == a[1] && a[1] == a[7])
        {
            ans = a[4];
        }
        else if (a[2] > 0 && a[5] == a[2] && a[5] == a[8])
        {
            ans = a[2];
        }
        else if (a[0] > 0 && a[0] == a[4] && a[4] == a[8])
        {
            ans = a[0];
        }
        else if (a[2] > 0 && a[4] == a[2] && a[6] == a[2])
        {
            ans = a[2];
        }

        if (ans == 1)
        {
            cout << 'X' << '\n';
        }
        else if (ans == 2)
        {
            cout << 'O' << '\n';
        }
        else if (ans == 3)
        {
            cout << '+' << '\n';
        }
        else if (ans < 0)
        {
            cout << "DRAW" << '\n';
        }
    }
    return 0;
}
