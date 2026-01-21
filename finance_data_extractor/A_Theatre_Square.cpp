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

void solve()
{
    // Your code here
    int n, m, a;
    cin >> n >> m >> a;
    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;

    return;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; // Change to t = number of test cases if needed
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}