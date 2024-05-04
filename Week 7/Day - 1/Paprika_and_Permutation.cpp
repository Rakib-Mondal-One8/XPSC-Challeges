// #include <bits/stdc++.h>
// typedef long long ll;
// #define Yes cout << "YES" << '\n'
// #define No cout << "NO" << '\n'
// #define nl '\n';
// #define loop(i, s, n) for (int i = s; i <= n; i++)
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> a(n);
//         loop(i, 0, n - 1)
//         {
//             cin >> a[i];
//         }
//         sort(a.begin(), a.end());
//         map<int, int> mp;
//         auto ok = [&](int val)
//         {
//             int l = 2, r = val;
//             while (l <= r)
//             {
//                 int mid = l + (r - l) / 2;
//                 if ((val % mid) <= n)
//                 {
//                     mp[(val % mid)]++;
//                     l = mid + 1;
//                 }
//                 else if ((val % mid) > n)
//                 {
//                     l = mid + 1;
//                 }
//                 else
//                     r = mid - 1;
//             }
//         };
//         auto ok2 = [&](int val, int target)
//         {
//             int l = 2, r = val;
//             bool found = false;
//             while (l <= r)
//             {
//                 int mid = l + (r - l) / 2;
//                 if ((val % mid) == target)
//                 {
//                     mp[val % mid]++;
//                     break;
//                 }
//                 else if ((val % mid) > target)
//                 {
//                     l = mid + 1;
//                 }
//                 else
//                     r = mid - 1;
//             }
//             return found;
//         };
//         int op = 0;
//         bool can = true;
//         vector<int> freq(n + 1);
//         loop(i, 0, n - 1)
//         {
//             if (a[i] <= n)
//             {
//                 freq[a[i]] = true;
//             }
//             ok(a[i]);
//             if (a[i] != i + 1)
//                 ok2(a[i], i + 1);
//         }

//         loop(i, 0, n - 1)
//         {
//             if (!freq[i + 1])
//             {
//                 if (mp[i + 1] > 0)
//                 {
//                     op++;
//                     a[i] = i + 1;
//                     mp[i + 1]--;
//                     freq[i + 1] = true;
//                 }
//                 else
//                 {
//                     can = false;
//                     break;
//                 }
//             }
//         }

//         if (can)
//             cout << op << nl else cout << -1 << nl;
//     }
//     return 0;
// }

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

        vector<int> a;
        set<int> st;
        loop(i, 1, n)
        {
            st.insert(i);
        }
        loop(i, 0, n - 1)
        {
            int val;
            cin >> val;
            if (st.find(val) != st.end())
            {
                st.erase(val);
            }
            else
                a.push_back(val);
        }
        sort(a.begin(), a.end(), greater<int>());
        bool ok = true;
        for (int val : a)
        {
            int x = *st.rbegin();
            st.erase(x);
            if (x > (val - 1) / 2)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << a.size() << nl 
        else cout << -1 << nl;
    }
    return 0;
}