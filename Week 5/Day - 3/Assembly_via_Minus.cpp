#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
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

        int m = (n * (n - 1)) / 2;
        vector<int> a(m);
        loop(i, 0, m - 1)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < m; i += (n -= 1)) // a[i] th element jehetu choto b array ar sob element diye
        // sehetu a[i] er occurance hobe n-i b array te;
        // a jehetu sorted sei jonne ami next b[i+1] er maan a array er n-i th element er por theke nebo then abr next value a er aro n-i th element ke nebo
        {
            cout << a[i] << " ";
        }
        int N = 1e9;
        cout << N << nl;
    }
    return 0;
}