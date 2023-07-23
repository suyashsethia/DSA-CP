
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int n, long long int k);
int main()
{
    

    

    long long int n, k;
    cin >> n;
    long long int arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    vector<long long> ans = printFirstNegativeInteger(arr, n, k);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}

vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int n, long long int k)
{

    vector<long long> ans;
    queue<long long> neg;
    long long int i = 0;
    long long j = 0;
    while (j < n)
    {
        if (A[j] < 0)
        {
            neg.push(A[j]);
        }

        if (j == i + k - 1)
        {
            if (neg.empty() == true)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(neg.front());
            }
            if (neg.front() == A[i])
            {
                neg.pop();
            }
            i++;
        }
        j++;
    }
    return ans ;
}