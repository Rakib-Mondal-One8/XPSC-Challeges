#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;

int upleft(int i, int j, vector<vector<int>> &grid)
{
    if (i < 0 || j < 0)
        return 0;
    int val = upleft(i - 1, j - 1, grid) + grid[i][j];
    return val;
}
int upright(int i, int j, vector<vector<int>> &grid)
{
    if (i < 0 || j >= grid[0].size())
        return 0;

    int val = upright(i - 1, j + 1, grid) + grid[i][j];
    return val;
}

int downleft(int i, int j, vector<vector<int>> &grid)
{
    if (i >= grid.size() || j <0)
        return 0;

    int val = downleft(i + 1, j - 1, grid) + grid[i][j];
    return val;
}
int downright(int i, int j, vector<vector<int>> &grid)
{
    if (i >= grid.size() || j >= grid[0].size())
        return 0;

    int val = downright(i + 1, j + 1, grid) + grid[i][j];
    return val;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;

        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        loop(i, 0, n - 1)
        {
            loop(j, 0, m - 1)
            {
                cin >> grid[i][j];
            }
        }
        int ans = 0;
        loop(i, 0, n - 1)
        {
            loop(j, 0, m - 1)
            {
                int ul = upleft(i - 1, j - 1, grid);
                int ur = upright(i - 1, j + 1, grid);
                int dl = downleft(i + 1, j - 1, grid);
                int dr = downright(i + 1, j + 1, grid);
                ans = max(ans, (ul + ur + dl + dr + grid[i][j]));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
