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
        long int n, m;
        cin >> n >> m;
        vll a(n), b(m);
        long int pa = 0, pb = 0;
        FOR(i, 0, n)
        {
            cin >> a[i];
        }
        sort(ALL(a));
        FOR(i, 0, m)
        {
            cin >> b[i];
        }
        sort(ALL(b));
        long int c = 0;
        long int i = n - 1;
        long int i2 = 0;
        long int j = m - 1;
        long int j2 = 0;
        int flag = 0;
        while (i >= i2 && j >= j2)
        {
            if (a[i] > b[j2])
            {
                a[i] = a[i] - b[j2];
                j2++;
            }
            else if (a[i] == b[j2])
            {
                j2++;
                i--;
            }
            else
            {
                flag = -1;
                break;
            }
            sort(ALL(a));
            if (b[j] > a[i2])
            {
                b[j] = b[j] - a[i2];
                i2++;
            }
            else if (a[i2] == b[j])
            {
                j--;
                i2++;
            }
            else
            {
                flag = 1;
                break;
            }
            sort(ALL(b));
        }
         if (i >= i2 && j < j2)
        {
            flag = 1;
        }
        else if (j >= j2 && i < i2)
        {
            flag = -1;
        }
        if (flag == 1)
        {
            cout << "Tsondu";
        }
        else if (flag == 0)
        {
            cout << "Draw";
        }
        else
        {
            cout << "Tenzing";
        }
        nl;
    }
    return 0;
}