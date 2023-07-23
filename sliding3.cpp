#include <bits/stdc++.h>
using namespace std;

vector<int> slidingMaximum(const vector<int> &A, int b)
{
    int i = 0;
    int j = 0;
    vector<int> len1;
    int maxi = INT_MIN;
    int n1 = A.size();
    queue<int> pq;
    pq.push(0);
    while (j < n1)
    {

        if (A[j] > maxi)
        {
            while(pq.size()!=0)
            {
                pq.pop();
            }
            maxi = A[j];
        }
        pq.push(A[j]);
        if (j == i + b - 1)
        {
            len1.push_back(pq.front());
            if (pq.front() == A[i])
            {
                pq.pop();
                maxi = pq.front();
            }
            i++;
        }
        j++;
    }
    return len1;
}
int main()
{
    int n1;
    cin >> n1;
    vector<int> A(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> A[i];
    }
    int b;
    cin >> b;

    vector<int> ans = slidingMaximum(A, b);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}