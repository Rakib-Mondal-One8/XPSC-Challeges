#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        vector<pair<int, bool>> freq(27, {0, false});
        priority_queue<int, vector<int>, cmp> q;
        for (char c : s)
        {
            freq[c - 'a'].first++;
        }
        for (char c : s)
        {
            int val = freq[c - 'a'].first;
            bool f = freq[c - 'a'].second;
            if (f == false)
            {
                q.push(val);
                freq[c - 'a'].second = true;
            }
        }

        int odd = 0;
        int even = 0;
        while (!q.empty())
        {
            int val = q.top();
            q.pop();
            if (val % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int ans = 0;
        if(k > odd)
            odd = 0;
        ans = abs(k - odd);

        if (odd == 0)
        {
            cout << "YES\n";
        }
        else if (ans >= 0 && ans <= 1)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
