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
        int n, k;
        cin >> n >> k;
        vi a(n);
        map<int, vector<int>> index;
        map<int, int> indexx;
        priority_queue<int> pq;
        FOR(i, 0, n)
        {
            cin >> a[i];
            index[a[i]].push_back(i);
            pq.push(a[i]);
            indexx[a[i]] = 0;
        }

        vi ans;
        sort(ALL(a));
        int f = pq.top();
        while (pq.size() > 0)
        {
            if (pq.top() < 0)
            {
                ans.push_back(index[f][indexx[f]] + 1);
                indexx[f]++;
                pq.pop();
                if (pq.size() == 0)
                {
                    break;
                }
                f = pq.top();
            }
            int top_element = pq.top(); // Retrieve the top element
            pq.pop();                   // Remove the top element from the priority queue
            top_element -= k;           // Modify the top element
            pq.push(top_element);       // Insert the modified element back into the priority queue
        }
        FOR(i, 0, n)
        {
            cout << ans[i] << " ";
        }
        nl;
    }
    return 0;
}