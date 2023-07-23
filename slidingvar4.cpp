#include <bits/stdc++.h>
using namespace std;

int totalFruit(vector<int> &fruits)
{
    set<int> mp;

    int i = 0;
    int j = 0;
    int ans = INT_MIN;
    // int index_2;
    int erase;
    int conti_count = 1;
    while (j < fruits.size())
    {
        mp.insert(fruits[j]);
        if (mp.size() > 2)
        {
            int count = j - i;
            if (count > ans)
            {
                ans = count;
            }
            count = conti_count + 1;
            i +=conti_count;
            mp.clear();
            mp.insert(fruits[j]);
            mp.insert(fruits[j - 1]);
        }
        if (j != 0 && fruits[j] == fruits[j - 1])
        {
            conti_count++;
        }
        else
        {
            conti_count = 1;
        }
        j++;
    }
    int count = j - i;
    if (count > ans)
    {
        ans = count;
    }
    // ans = ans + conti_count - 1;
    if (ans < 0)
    {
        ans = fruits.size();
    }
    return ans;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << totalFruit(arr) << endl;
    }
}