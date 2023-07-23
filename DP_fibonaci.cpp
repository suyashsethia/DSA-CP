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
int countt = 0;

int fibonacci(int n, vector<int>& memoize)
{
    countt++;
    if (memoize[n] != 0)
    {
        return memoize[n];
    }
    else
    {
        memoize[n] = fibonacci(n - 1, memoize) + fibonacci(n - 2, memoize);
        return memoize[n];
    }
}

int main()
{
    JALDI jaldi;

    vector<int> memoize(MAX, 0);
    memoize[0] = 1;
    memoize[1] = 1;

    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = fibonacci(n, memoize);
        cout << ans << " " << countt;
        nl;
    }
    return 0;
}
