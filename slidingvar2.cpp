#include <bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k)
{
    // your code here
    map<char, int> mp;
    int i = 0;
    int j = 0;
    int ans = -1;
    while (j < s.size())
    {
        mp[s[j]]++;
        if (mp.size() == k)
        {
            int slide_size = j - i + 1;
            if (ans < slide_size)
            {
                ans = slide_size;
            }
        }
        else if (mp.size() > k)
        {
            mp[s[i]]--;
            if (mp[s[i]] == 0)
            {
                mp.erase(s[i]);
            }
            i++;
        }
        j++;
    }
    return ans;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        // Solution ob;
        cout << longestKSubstr(s, k) << endl;
    }
}