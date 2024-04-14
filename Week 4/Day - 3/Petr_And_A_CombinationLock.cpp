#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
int dp[16][200] = {0};
bool possibleOrNot(vector<int> &a, int n, int val)
{
    if (n == 0)
    {
        if (val == 0)
        {
            return true;
        }
        return false;
    }
    if (dp[n][val] == 1)
    {
        return dp[n][val];
    }
    if (val + a[n - 1] > 360 && (val - a[n - 1]) < 0)
    {
        bool op1 = possibleOrNot(a, n - 1, (val + a[n - 1]) - 360);
        bool op2 = possibleOrNot(a, n - 1, (360 - abs(val - a[n - 1])));
        return dp[n][val] = op1 | op2;
    }
    else if (val + a[n - 1] > 360)
    {
        bool op1 = possibleOrNot(a, n - 1, (val + a[n - 1]) - 360);
        bool op2 = possibleOrNot(a, n - 1, val - a[n - 1]);
        return dp[n][val] = op1 | op2;
    }
    else if ((val - a[n - 1]) < 0)
    {
        bool op1 = possibleOrNot(a, n - 1, val + a[n - 1]);
        bool op2 = possibleOrNot(a, n - 1, (360 - abs(val - a[n - 1])));
        return dp[n][val] = op1 | op2;
    }
    else
    {
        bool op1 = possibleOrNot(a, n - 1, val + a[n - 1]);
        bool op2 = possibleOrNot(a, n - 1, val - a[n - 1]);
        return dp[n][val] = op1 | op2;
    }
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
    if (possibleOrNot(a, n, 0))
    {
        Yes;
    }
    else
        No;

    return 0;
}