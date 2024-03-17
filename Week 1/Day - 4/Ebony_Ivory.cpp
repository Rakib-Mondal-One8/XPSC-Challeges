#include <bits/stdc++.h>
using namespace std;
vector<vector<bool>> dp(5,vector<bool>(10005,false));
bool is_possible(int a[], int n, int t)
{
    if (t == 0)
        return true;
    if (n == 0 && t != 0)
        return false;

    if(dp[n][t] != false)
        return dp[n][t];
    if(a[n-1] <= t)
    {
        bool op1 = is_possible(a,n,t-a[n-1]);
        bool op2 = is_possible(a,n-1,t);
        return dp[n][t] = op1 || op2;
    }
    else
    {
        return dp[n][t] = is_possible(a, n - 1, t);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a[2];
    cin >> a[0] >> a[1];
    int c;
    cin >> c;

    if(is_possible(a,2,c))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}