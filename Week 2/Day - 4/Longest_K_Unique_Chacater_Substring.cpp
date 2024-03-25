/*
class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        int l = 0, r = 0, cnt = 0;
        int ans = -1;
        multiset<char> ml;
        while (r < s.size())
        {
            char c = s[r];
            if (ml.find(c) == ml.end())
            {
                cnt++;
            }
            ml.insert(c);
            if (cnt == k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (cnt > k)
                {
                    char c = s[l];
                    auto it = ml.find(c);
                    ml.erase(it);
                    l++;
                    if (ml.find(c) == ml.end())
                    {
                        cnt--;
                    }
                }
                if (cnt == k)
                    ans = max(ans, r - l + 1);
            }
            r++;
        }
        return ans;
    }
};
*/