#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
bool is_Prime(int val, int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (val % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> prime;
    int tmp = n;
    for (int i = 2; i <= n; i++)
    {
        while (tmp != 0)
        {
            if ((tmp - i) == 1)
            {
                break;
            }
            tmp -= i;
            prime.push_back(i);
        }
    }
    cout << prime.size() << nl;
    for (auto p : prime)
    {
        cout << p << " ";
    }
    cout << nl;
    return 0;
}