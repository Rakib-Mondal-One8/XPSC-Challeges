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

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    loop(i, 0, n - 1)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool flag = false;

        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            else if (a[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag)
            Yes;
        else
            No;
    }
    return 0;
}