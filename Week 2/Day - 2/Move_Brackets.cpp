#include <bits/stdc++.h>
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
        string s;
        cin >> s;

        int open = 0;
        int close = 0;
        int steps = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                open++;
                if (open == close)
                {
                    open = 0;
                    close = 0;
                }
            }
            if (s[i] == ')')
            {
                close++;
                if (close > open)
                {
                    steps++;
                    open = 0;
                    close = 0;
                }
                if (close == open)
                {
                    open = 0;
                    close = 0;
                }
            }
        }
        cout << steps << '\n';
    }
    return 0;
}