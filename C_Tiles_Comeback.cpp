#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define MP make_pair
#define PB push_back
#define S second
#define nl cout << '\n'
#define ALL(container) (container).begin(), (container).end()
#define MAX 1111111
#define MOD 1000000007
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi;

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vi c(n), b(n);
        FOR(i, 0, n)
        {
            cin >> c[i];
            // b[i] = c[i];
        }

        int r = 0;
        int count = 0;
        int flag = 0;
        int flagg = 0;
        int y = 0;
        if (c[0] == c[n - 1])
        {
            for (int i = 0; i < n; i++)
            {
                if (c[i] == c[0])
                {
                    count++;
                }
            }
            if (count >= k)
            {
                flagg = 1;
                flag = 1;
            }
        }
        else
        {
            FOR(i, 0, n)
            {
                y = i;
                if (c[i] == c[0])
                {
                    count++;
                }

                if (count == k)
                {
                    flagg = 1;
                    break;
                }
            }
            count = 0;
            FOK(i, 0, n - 1)
            {
                if (c[i] == c[n - 1])
                {
                    count++;
                }

                if (count == k)
                {
                    r = i;
                    break;
                }
            }
        }
        if (r > y)
        {
            flag = 1;
        }
        if (flagg == 1 && flag == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        nl;
    }
    return 0;
}