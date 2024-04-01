#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
/*RAKIB*/
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
        int mn = INT_MAX;
        int mx = INT_MIN;
        int Mnidx;
        int Mxidx;
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        int mxdiff =  INT_MIN;
        if(n == 1)
        {
            cout << "0\n";
            continue;
        }
        loop(i,1,n-1){
            mxdiff = max((a[i-1] - a[i]),mxdiff);
        }
        loop(i,0,n-2){
            mxdiff = max(mxdiff,(a[n-1] - a[i]));
        }
        loop(i,1,n-1){
            mxdiff = max(mxdiff,(a[i] - a[0]));
        }
        cout<<mxdiff<<nline
        
    }
    return 0;
}
