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
vector<long long int> memoize(10000001, -1);
long long  int dice(long long  int n)
{
    if (memoize[n] != -1)
    {
        return memoize[n]%MOD;
    }
    if (n <= 6)
    {
       long long  int k = 0;
        for (long long  int i = 1; i < n; i++)
        {
            k += dice(n - i);
        }
        k += 1;
        memoize[n] = k%MOD;
        return k%MOD;
    }
    else
    {
       long long  int k = 0;
        for (long long  int i = 1; i <= 6; i++)
        {
            k += dice(n - i);
        }
        memoize[n] = k%MOD;
        return memoize[n]%MOD;
    }
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi;

    long long int t = 1;
    // cin >> t;
    while (t--)
    {
        // vector<int> memoize(1000001, -1);
       long long  int n;
        cin >> n;
        // for (int i = 1; i <= 1; i++)
        // {
        // }
        memoize[1] = 1;
        // memoize[2] = 2;
       long long  int ans = dice(n);
        cout << ans%MOD;
        nl;
    }
    return 0;
}