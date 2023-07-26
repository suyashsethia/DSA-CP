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
int mod(int a)
{
    if (a < 0)
    {
        a = -1 * a;
    }
    return a;
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
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        vi p(n);
        int ans = 0;
        FOR(i, 0, n)
        {

            int o;
            cin >> o;
            if (mod(o - h) % k == 0 && mod(o - h)!=0)
            {
                if (mod(o - h) / k < m  )
                {
                    ans++;
                }
            }
        }
        cout << ans;
        nl;
    }
    return 0;
}