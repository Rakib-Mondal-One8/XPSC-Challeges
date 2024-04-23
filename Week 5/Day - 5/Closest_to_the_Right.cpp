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
        int val;
        cin >> val;

        int l = 0, r = n - 1, idx = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] >= val)
            {
                idx = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << idx+1 << nl;
    }
    return 0;
}