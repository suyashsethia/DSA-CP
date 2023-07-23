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
        int n, m;
        cin >> n >> m;
        vi a(m), b(n);
        vi ans(n + 1, 0);
        stack<int> Q;
        FOR(i, 0, n)
        {
            cin >> b[i];
            Q.push(b[i]);
        }
        FOR(i, 0, m)
        {
            cin >> a[i];
        }
        vi count(1000000, 0);
        FOR(i, 0, n)
        {
            int k = Q.top();
            if (count[k] == 0)
            {
                count[k] = 1;
                ans[i + 1] = ans[i] + 1;
            }
            else
            {
                ans[i + 1] = ans[i];
            }
            Q.pop();
        }
        FOR(i, 0, m)
        {
            cout << ans[n-a[i]+1];
            nl;
        }
    }
    return 0;
}