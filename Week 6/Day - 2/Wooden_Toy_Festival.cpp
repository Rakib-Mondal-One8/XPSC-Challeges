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

        vector<int> a(n);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int l = -1, r = 1e9;
        while (l+1 < r)
        {
            int mid = (l + r)/2;
            int i = 0;
            while (i + 1 < a.size() && a[i + 1] - a[0] <= 2 * mid)
                i++;
            int j = n - 1;
            while (j - 1 >= 0 && a[n - 1] - a[j - 1] <= 2 * mid)
                j--;

            i++;
            j--;
            if (i >= j || a[j] - a[i] <= 2 * mid)
                r = mid;
            else
                l = mid;
        }
        cout << r << nl;
    }
    return 0;
}

