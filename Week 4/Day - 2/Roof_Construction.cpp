#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        loop(i, 0, n - 1)
        {
            a[i] = i;
        }
        map<int, vector<int>> Msbits;
        int mxBit = 0;
        loop(i, 0, n - 1)
        {
            int idx = log2(a[i]);
            mxBit = max(mxBit, idx);
            Msbits[idx].push_back(a[i]);
        }
        Msbits[0].push_back(0);
        for (int i = 32; i >= 0; i--)
        {
            if (Msbits.find(i) != Msbits.end() && i != mxBit)
            {
                for (auto val : Msbits[i])
                {
                    cout << val << " ";
                }
                Msbits.erase(i);
            }
        }
        for (int val : Msbits[mxBit])
        {
            cout << val << " ";
        }
        cout << nline
    }
    return 0;
}