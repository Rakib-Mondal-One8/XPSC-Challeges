#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
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
            cin >> a[i];
        }
        int freq[32]={0};
        loop(i, 0, 31)
        {
            loop(j, 0, n - 1)
            {

                freq[i] += (a[j] >> i)& 1;
            }
        }
        int commonDiv = -1;
        loop(i, 0, 30)
        {
            if (freq[i] != 0)
            {
                if (commonDiv == -1)
                    commonDiv = freq[i];
                commonDiv = gcd(commonDiv, freq[i]);
            }
        }
        if (commonDiv == -1)
        {
            loop(i, 1, n)
            {
                cout << i << " ";
            }
        }
        else
        {
            loop(i, 1, commonDiv)
            {
                if (commonDiv % i == 0)
                {
                    cout << i << " ";
                }
            }
        }
        cout << nl;
    }
    return 0;
}