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
        int n;
        cin >> n;
        vi a(n), b(n, -1), c(n, -1);
        FOR(i, 0, n)
        {
            cin >> a[i];
        }
        FOR(i, 0, n - 1)
        {
            cin >> b[i];
        }
        FOR(i, 0, n - 2)
        {
            cin >> c[i];
        }
        sort(ALL(a));
        sort(b.begin(), b.end()-1);
        sort(c.begin(), c.end()-2);

        int ans1, ans2;
        FOR(i, 0, n)
        {
            if (a[i] != b[i])
            {
                ans1 = a[i];
                break;
            }
        }
        FOR(i, 0, n)
        {
            if (b[i] != c[i])
            {
                ans2 = b[i];
                break;
            }
        }
        cout << ans1;
        nl;
        cout << ans2;
        nl;
    }
    return 0;
}