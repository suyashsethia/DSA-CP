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
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n - 1);
        for (ll i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        int ans;
        if (n == 2)
        {
            if (a[0] == 1)
            {
                ans = 2;
            }
            else
            {
                ans = 1;
            }
        }
        else
        {
            ans = n;
            sort(ALL(a));
            int k = a[0];

            for (ll i = 1; i < n - 1; i++)
            {
                if ((a[i] - k) != 1)
                {
                    ans = k + 1;
                    break;
                }
                k = a[i];
            }
        }

        cout << ans;
        nl;
    }
    return 0;
}