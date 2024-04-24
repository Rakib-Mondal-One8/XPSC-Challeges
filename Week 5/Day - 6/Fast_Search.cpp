#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
int bsearch_l(const vector<int> &a, int v)
{
    int n = a.size();
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
    return idx + 1;
}
int bsearch_r(const vector<int> &a, int val)
{
    
    int n = a.size();
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
    return idx + 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    loop(i, 0, n - 1)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    loop(i, 0, n - 1)
    {
        bsearch_r(a, a[i]);
        bsearch_l(a, a[i]);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int idxy = bsearch_l(a, r);
        int idxx = bsearch_r(a, l);

        if (idxx == n + 1 || idxy == 0)
            cout << 0 << " ";
        else
        {
            cout << (idxy - idxx) + 1 << " ";
        }
    }
    cout << nl;
    return 0;
}


