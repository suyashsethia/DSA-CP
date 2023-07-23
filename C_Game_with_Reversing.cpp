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
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int diff1 = 0;
        int diff2 = 0;
        FOR(i, 0, n)
        {
            if (s[i] != t[i])
            {
                diff1++;
            }
            if (s[i] != t[n - i - 1])
            {
                diff2++;
            }
        }
        int ans = 0;
        if (diff1 > diff2)
        {
            if (diff2 % 2 == 1)
            {
                ans = diff2 + diff2;
            }
            else if (diff2 == 0)
            {
                ans = 2;
            }
            else
            {
                ans = diff2 + diff2 - 1;
            }
        }
        else if (diff1 < diff2)
        {
            if (diff1 == 1)
            {
                ans = 1;
            }
            else if (diff1 == 0)
            {
                ans = 0;
            }
            else if (diff1 % 2 == 1)
            {
                ans = diff1 + diff1-1;
            }
            else
            {
                ans = diff1 + diff1 ;
            }
        }
        else
        {
            if (diff1 == 0)
            {
                ans = 0;
            }
            // else if (diff1 % 2 == 1)
            // {
            // }
            // else
            // {
            //     ans = diff1 + diff1 ;
            // }
            else
            {
                ans = diff1 + diff1-1;

            }
        }
        cout << ans;
        nl;
    }
    return 0;
}