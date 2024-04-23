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

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    loop(i, 0, n - 1)
    {
        cin >> a[i];
    }

    loop(i, 1, x)
    {
        int v;
        cin >> v;

        int l = 0, r = n - 1, idx = -1;
        while (l <= r)
        {
            int mid = (r + l) / 2;
            if (a[mid] <= v)
            {
                idx = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << idx+1 << nl;
    }

    return 0;
}