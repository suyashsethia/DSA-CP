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
int mod(int x)
{
    if (x < 0)
    {
        return -x;
    }
    return x;
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi;

    int t = 1;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vi a(n);
       long long  int ans = 0;
        FOR(i, 0, n)
        {
            cin >> a[i];
            ans += mod(a[i]);
        }
       long long  int k = 0;
        long long int i = 0;
        long long int j = n - i - 1;
        while (i <= j)
        {
            if (a[i] == 0 && a[j] == 0)
            {
                i++;
                j--;
                continue;
            }
            if (a[i] >= 0 && a[j] >= 0)
            {
                if (a[i] == 0)
                {
                    if (k % 2 == 1)
                    {
                        i++;
                    }
                    else
                    {
                        i++;
                        j--;
                    }
                }
                else if (a[j] == 0)
                {
                    if (k % 2 == 0)
                    {
                        i++;
                        j--;
                    }
                    else
                    {
                        j--;
                    }
                }
                else
                {

                    if (k % 2 == 1)
                    {

                        k++;
                        i++;
                        j--;
                    }
                    else
                    {
                        i++;
                        j--;
                    }
                }
            }
            else if (a[i] <= 0 && a[j] <= 0)
            {
                if (a[i] == 0)
                {
                    if (k % 2 == 1)
                    {
                        i++;
                        j--;
                    }
                    else
                    {
                        i++;
                    }
                }
                else if (a[j] == 0)
                {
                    if (k % 2 == 1)
                    {
                        i++;
                        j--;
                    }
                    else
                    {
                        j--;
                    }
                }
                else
                {
                    if (k % 2 == 0)
                    {
                        k++;
                        i++;
                        j--;
                    }
                    else
                    {
                        i++;
                        j--;
                    }
                }
            }
            else if (a[i] >= 0 && a[j] <= 0)
            {
                if (a[i] == 0)
                {
                    if (k % 2 == 1)
                    {
                        i++;
                        j--;
                    }
                    else
                    {
                        i++;
                    }
                }
                else if (a[j] == 0)
                {
                    if (k % 2 == 1)
                    {
                        j--;
                    }
                    else
                    {
                        i++;
                        j--;
                    }
                }
                else
                {
                    if (k % 2 == 0)
                    {
                        i++;
                    }
                    else
                    {
                        j--;
                    }
                }
            }
            else
            {
                if (a[i] == 0)
                {
                    if (k % 2 == 1)
                    {
                        i++;
                    }
                    else
                    {
                        i++;
                        j--;
                    }
                }
                else if (a[j] == 0)
                {
                    if (k % 2 == 1)
                    {
                        i++;
                        j--;
                    }
                    else
                    {
                        j--;
                    }
                }
                else
                {
                    if (k % 2 == 1)
                    {
                        i++;
                    }
                    else
                    {
                        j--;
                    }
                }
            }
        }
        cout << ans << " " << k;
        nl;
    }
    return 0;
}