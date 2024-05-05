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
        int sum = 0;
        loop(i, 0, n - 1)
        {
            a[i] = i + 1;
            sum += a[i];
        }
        if (sum % n != 0)
        {
            int i = 2;
            while (true)
            {
                if ((n * i) >= sum)
                {
                    if ((sum + (n*i - sum))%n == 0){
                        a[0] += (n * i - sum);
                        break;
                    }
                }
                i++;
            }
        }
        loop(i, 0, n - 1)
        {
            cout << a[i] << " ";
        }
        cout << nl;
    }
    return 0;
}