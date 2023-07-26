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
ll binarysearch(vector<ll> &a, ll target)
{
    ll l = 0;
    ll r = a.size() - 1;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}
int main()
{
    JALDI jaldi;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;       
        vll a(n), b(n);
        FOR(i, 0, n)
        {
            ll g;
            cin >> g;
            a[i] = g;
            b[i] = g;
        }
        sort(ALL(a));
        int flag = 1;
        FOR(i, 0, n)
        {
            // ll k = binarysearch(a, b[i]);
            if ((b[i] % 2) != (a[i] % 2))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
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