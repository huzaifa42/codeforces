#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    int t;
    unordered_map<int, int> m;
    while (n--)
    {
        cin >> t;
        m[t]++;
    }
    if (m.size() > 2)
        cout << "NO" << endl;
    else if (m.size() == 1)
        cout << "YES" << endl;
    else
    {
        auto it = m.begin();
        int cnt1 = it->second;
        it++;
        int cnt2 = it->second;

        if (abs(cnt1 - cnt2) <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

        int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}