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

    int n;
    cin >> n;

    vector<int> a(n), prefix(n);
    loop(i, 0, n - 1)
    {
        cin >> a[i];
    }
    prefix[0] = a[0];
    loop(i, 1, n - 1)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1, idx;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (prefix[mid] >= x)
            {
                idx = mid + 1;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << idx << nl;
    }
    return 0;
}