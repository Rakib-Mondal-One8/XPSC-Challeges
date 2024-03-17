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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        if (c == 'g')
        {
            cout << "0\n";
            continue;
        }
        int time = 0;
        int rt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[n - i - 1] == 'g')
                break;
            if (s[n - i - 1] == c)
            {
                rt = i + 1;
            }
        }
        if (rt == 0)
        {
            bool mark = false;
            for (int i = 0; i < n; i++)
            {
                if (mark && s[i] == 'g')
                    break;
                if (mark)
                    time++;
                else if (s[i] == c)
                {
                    mark = true;
                    time++;
                }
            }
        }
        else
        {
            for (char c : s)
            {
                if (c == 'g')
                    break;
                time++;
            }
        }
        cout << (time + rt) << '\n';
    }
    return 0;
}
