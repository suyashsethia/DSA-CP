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
vll coins;
vll memoize(10000001, -1);
ll coins_func(ll x)
{
    if (x < 0)
    {
        return 0;
    }
    if (x == 0)
    {
        memoize[x] == 1;
        return 1;
    }
    if (memoize[x] != -1)
    {

        return memoize[x];
    }
    ll k = 0;
    for (ll i = 0; i < n; i++)
    {

        if (x - coins[i] >= 0)
        {
            ll a = coins_func(x - coins[i])%MOD;
            k += a%MOD;
        }
    }
    if (k < 0)
    {
        memoize[x] = -1;
        return -1;
    }
    else
    {
        memoize[x] = k % MOD;
        return k % MOD;
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

        for (ll i = 0; i < n; i++)
        {
            ll k;
            cin >> k;

            coins.PB(k);
        }
        sort(ALL(coins), greater<ll>());
        ll ans = coins_func(x) % MOD;
        cout << ans % MOD;
        nl;
    }
    return 0;
}