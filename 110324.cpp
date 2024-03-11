
#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    string removeDuplicates(string str)
    {
        string ans;
        unordered_map<char, int> map;
        for (int i = 0; i < str.size(); i++)
        {
            map[str[i]]++;
            if (map[str[i]] == 1)
            {
                ans += str[i];
            }
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
