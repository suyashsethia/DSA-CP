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

int isequal(vector<int> countg, vector<int> counts)
{
    int ans = 1;
    for (int i = 0; i < 26; i++)
    {
        if (countg[i] != counts[i])
        {
            ans = 0;
        break;
        }
    }
    return ans;
}
int func(string g, string s)
{
    int k = g.length();
    vector<int> countg(26, 0);
    vector<int> counts(26, 0);
    for (int i = 0; i < k; i++)
    {
        countg[g[i] - 'a'] += 1;
    }
    int ans = 0;
    int i = 0;
    int j = 0;
    int u = s.length();
    while (j < u)
    {
        counts[s[j] - 'a'] += 1;

        if (j >= i + k - 1)
        {
            string r = s.substr(i, k);
            if (isequal(countg, counts))
            {
                ans++;
            }
            counts[s[i] - 'a'] -= 1;
            i++;
        }
        j++;
    }
    return ans;
}
int main()
{
//     freopen(file ".in", "r", stdin);
//     freopen(file ".out", "w", stdout);
    JALDI jaldi;

    int t = 1;
    // cin>>t;
    while (t--)
    {
        string s;
        string g;
        cin >> s >> g;
        int ans = func(s, g);
        cout << ans;
    }
    return 0;
}