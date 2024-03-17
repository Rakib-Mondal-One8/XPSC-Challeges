#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        map<string, int> mp;
        int n;
        cin >> n;
        vector<string> v(3);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string word;
                cin >> word;
                v[i] += word;
                v[i] += ' ';
                auto it = mp.find(word);
                if (it != mp.end())
                {
                    it->second++;
                }
                else
                    mp.insert({word, 1});
            }
        }
        vector<int> ans;
        for (int i = 0; i < 3; i++)
        {
            stringstream ss(v[i]);
            string word;
            int point = 0;
            while (ss >> word)
            {
                auto it = mp.find(word);
                if(it->second == 1)
                    point+=3;
                if(it->second == 2)
                    point+=1;
            }
            ans.push_back(point);
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}