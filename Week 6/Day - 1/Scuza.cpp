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
        int n, q;
        cin >> n >> q;

        vector<ll> a(n), prefix(n), prefMax(n);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        prefix[0] = a[0];
        prefMax[0] = a[0];
        loop(i, 1, n - 1)
        {
            prefix[i] = prefix[i - 1] + a[i];
            prefMax[i] = max(prefMax[i - 1], a[i]);
        }
        while (q--)
        {
            ll leg;
            cin >> leg;

            ll l = 0, r = n - 1;
            ll hight = 0;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (prefMax[mid] <= leg)
                {
                    hight = prefix[mid];
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            cout << hight << " ";
        }
        cout << nl;
    }
    return 0;
}