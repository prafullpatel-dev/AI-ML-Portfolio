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
    set<string> st;
    st.insert("1");
    st.insert("14");
    st.insert("144");

    string s;
    cin >> s;
    int n = s.length();
    int i = 0;
    while (i < n)
    {
        if (s.substr(i, 3) == "144")
        {
            i += 3;
        }
        else if (s.substr(i, 2) == "14")
        {
            i += 2;
        }
        else if (s.substr(i, 1) == "1")
        {
            i += 1;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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