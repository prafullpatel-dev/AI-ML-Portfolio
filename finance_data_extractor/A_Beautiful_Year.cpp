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

bool distinct(int year)
{
    set<int> st;
    while (year > 0)
    {
        int digit = year % 10;
        st.insert(digit);
        year /= 10;
    }
    if (st.size() == 4)
        return true;
    return false;
}

void solve()
{
    // Your code here
    int year;
    cin >> year;
    year++;
    while (true)
    {
        if (distinct(year))
        {
            cout << year << endl;
            return;
        }
        else
        {
            year++;
        }
    }
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