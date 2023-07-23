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
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 4 == 0 || n % 7 == 0 || n % 74 == 0 || n % 47 == 0 ||n % 477 == 0||n % 447 == 0||n % 474 == 0||n % 747 == 0||n % 774 == 0||n % 744 == 0)
        {
            cout << "YES";
            nl;
        }
        else
        {
            cout << " NO";
            nl;
        }
    }
    return 0;
}