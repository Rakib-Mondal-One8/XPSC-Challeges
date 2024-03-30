#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> b(n, 0), ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int x;
                cin >> x;
                b[x - 1] += j; // b[x - 1] = b[x - 1] + j;
                // calculating the maximum sum of positions of all elements
            }
            // for (int j = 0; j < n; j++)
            // {
            //     cout << b[j] << " ";
            // }
            // cout << '\n';
        }

        for (int i = 0; i < n; i++)
        {
            ans[b[i] / (n - 2)] = i + 1; // Final Equation for answer
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}


