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
        long long int x;
        cin >> x;
        string s = to_string(x);
        FOR(i, 0, s.size())
        {
            if (i == 0)
            {
                if (s[i] == '8')
                {
                    s[i] = '1';
                }
                else if (s[i] == '7')
                {
                    s[i] = '2';
                }
                else if (s[i] == '6')
                {
                    s[i] = '3';
                }
                else if (s[i] == '5')
                {
                    s[i] = '4';
                }
            }
            else
            {
                if (s[i] == '9')
                {
                    s[i] = '0';
                }
                else if (s[i] == '7')
                {
                    s[i] = '2';
                }
                else if (s[i] == '6')
                {
                    s[i] = '3';
                }
                else if (s[i] == '5')
                {
                    s[i] = '4';
                }
                if (s[i] == '8')
                {
                    s[i] = '1';
                }
                else if (s[i] == '7')
                {
                    s[i] = '2';
                }
                else if (s[i] == '6')
                {
                    s[i] = '3';
                }
                else if (s[i] == '5')
                {
                    s[i] = '4';
                }
            }
        }
        cout << s;
        nl;
    }
    return 0;
}