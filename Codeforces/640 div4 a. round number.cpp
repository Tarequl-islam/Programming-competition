#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
int main()
{
    int t, i, j, k, p, q, r, x = 0, y, u, v, n, m;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        fo(i, n.length())
        {
            if (n[i] != 0)
                x++;
        }
        cout << x << endl;
        fo(i, n.length())
        {
            if (n[i] != '0')
            {
                cout << n[i];
                fo(j, n.length() - i - 1)
                        cout
                    << "0";
                cout << " ";
            }
        }
    }

    cout << endl;

    return 0;
}