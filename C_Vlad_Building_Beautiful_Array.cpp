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
        vi a(n);
        int NO = 0, NE = 0, HO = 0, HE = 0, LO = INT_MAX, LE = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                NE++;
                if (a[i] > HE)
                {
                    HE = a[i];
                }
                if (a[i] < LE)
                {
                    LE = a[i];
                }
            }
            else
            {
                if (a[i] > HO)
                {
                    HO = a[i];
                }
                if (a[i] < LO)
                {
                    LO = a[i];
                }
                NO++;
            }
        }
        if (NE == 0 || NO == 0)
        {
            cout << "YES\n";
        }
        else if (NO > NE)
        {
            if (LO < LE)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if (NE >= NO)
        {
            if (LE < LO)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
       
    }
    return 0;
}