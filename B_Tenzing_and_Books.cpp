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
        long int n, x;
        cin >> n >> x;
        vll a(n), b(n), c(n);
        stack<long int> s;
        FOR(i, 0, n)
        {
            cin >> a[i];
        }
        FOR(i, 0, n)
        {
            cin >> b[i];
        }
        FOR(i, 0, n)
        {
            cin >> c[i];
        }
        long int i = 0,
                 j = 0,
                 k = 0;
        s.push(a[i]);
        s.push(b[j]);
        s.push(c[k]);
        int flag = 0;
        long int curr = 0;
        long int prev = curr;
        while (s.size() > 0)
        {
            if (curr == x)
            {
                flag = 1;
                break;
            }
            curr = (curr) | (s.top());
            if (curr > x)
            {
                curr = prev;
                s.pop();
            }
            else if (curr < x)
            {
                if (s.top() == a[i])
                {
                    s.pop();
                    i++;
                    s.push(a[i]);
                }
                else if (s.top() == b[j])
                {
                    s.pop();
                    j++;
                    s.push(b[j]);
                }
                else
                {
                    s.pop();
                    k++;
                    s.push(c[k]);
                }
                prev = curr;
            }
        }
        if (flag == 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        nl;
    }
    return 0;
}