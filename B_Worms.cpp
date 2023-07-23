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
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int> cum(n);
        cum[0] = arr[0];
        for(int i=1; i<n; i++)
            cum[i] = cum[i-1] + arr[i];

        cin>>m;
        for(int i=0; i<m; i++){
            int check; cin>>check;
            int low = 0, high = n-1;
            int ans = -1;
            while(low <= high){
                int mid = low + (high - low)/2;
                if(cum[mid] < check){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                    ans = mid;
                }
            }
            cout<<ans+1<<"\n";
        }
    }
    return 0;
}