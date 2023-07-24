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
vll memoize(10000001, -2);
vll value;
ll minn(ll a, ll b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}
ll ans(ll x)
{
    if (x < 0)
    {
        return -1;
    }
    else if (x == 0)
    {
        return 0;
    }
    if (memoize[x] != -2)
    {
        return memoize[x];
    }
    ll curr = LONG_LONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        int f;
        f = ans(x - value[i]);
        if (f != -1)
        {
            curr = minn(f, curr);
        }
    }
    if (curr == LONG_LONG_MAX)
    {
        memoize[x] = -1;
        return -1;
    }
    else
    {
        memoize[x] = curr + 1;
        return memoize[x];
    }
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll x;
        cin >> n >> x;
        // vll value(n);
        bool flag = 0;
        for (ll i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            value.PB(k);
            memoize[k] = 1;
            if (x == k)
            {
                flag = 1;
            }
        }
        // if (flag)
        // {
        //     cout << 1;
        //     nl;
        // }
        // else
        // {
        sort(value.begin(), value.end(), greater<ll>());
        cout << ans(x);
        nl;
        // }
    }
    return 0;
}