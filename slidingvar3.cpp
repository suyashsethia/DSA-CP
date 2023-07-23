#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    // your code here
    map<char, int> mp;
    int i = 0;
    int j = 0;
    int ans = -1;
    map<char, int> index;
    while (j < s.size())
    {
        mp[s[j]]++;
        if (mp[s[j]] > 1)
        {
            int slide_size = j - i;
            if (ans < slide_size)
            {
                ans = slide_size;
            }
            while (i <= index[s[j]])
            {
                mp[s[i]]--;
                i++;
            }
        }
        index[s[j]] = j;
        j++;
    }
    ans = max(ans , j-i);
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
        // Solution ob;
        cout << lengthOfLongestSubstring(s) << endl;
    }
}