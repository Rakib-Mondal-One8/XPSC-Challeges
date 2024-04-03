#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
vector<vector<ll>> edge;
vector<ll> cnt;
void dfs(int v, int parent)
{
    if (edge[v].size() == 1 && edge[v][0] == parent) // For Leaf Node
    {
        cnt[v] = 1;
    }
    else
    {
        for (auto child : edge[v])
        {
            if (child != parent)
            {
                dfs(child, v);
                cnt[v] += cnt[child]; // Calculating the nodes of subtree, where v is the root
            }
        }
    }
}
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

        edge.assign(n, vector<ll>());
        loop(i, 1, n - 1)
        {
            int u, v;
            cin >> u >> v;
            u--, v--;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }

        cnt.assign(n, 0);
        dfs(0, -1);
        int q;
        cin >> q;
        // loop(i,0,n-1){
        //     cout<<i+1<<"->"<<cnt[i]<<nline
        // }
        cout<<nline
        loop(i, 1, q)
        {
            int a, b;
            cin >> a >> b;
            ll ans = cnt[a - 1] * cnt[b - 1]; // so the ans combination should be the leaf count of xi * leaf count of yi
            // this are the combination from where the apples can drop.
            cout << ans << nline
        }
    }
    return 0;
}