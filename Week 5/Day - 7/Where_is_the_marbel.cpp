#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
// int binary_search(vector<int> &a, int l, int r, int val)
// {
//     if (l > r)
//         return -1;
//     int mid = (l + r) / 2;
//     if (a[mid] == val)
//         return mid + 1;
//     else if (a[mid] > val)
//         return binary_search(a, l, mid - 1, val);
//     else
//         return binary_search(a, mid + 1, r, val);
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int i = 1;
    while (true)
    {
        int n, q;
        cin >> n >> q;

        if ((n | q) == 0)
        {
            break;
        }
        vector<int> a(n);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << "CASE# " << i << ":" << nl;
        while (q--)
        {
            int val;
            cin >> val;
            int l = 0, r = n - 1, idx = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (a[mid] == val)
                {
                    idx = mid+1;
                    break;
                }
                else if (a[mid] > val)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            if (idx != -1)
            {
                cout << val << " found at " << idx << nl;
            }
            else
                cout << val << " not found" << nl;
        }
        i++;
    }
    return 0;
}