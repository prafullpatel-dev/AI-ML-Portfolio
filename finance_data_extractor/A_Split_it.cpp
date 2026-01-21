#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>

bool is_pal(string s, int k)
{
    int n = s.length();
    for (int i = 0; i < k; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    // Your code here
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (k == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (is_pal(s, k) && n >= 2 * k + 1)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
    return;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; // Change to t = number of test cases if needed
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}