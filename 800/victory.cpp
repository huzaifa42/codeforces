#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    n--;
    int t;
    while (n--)
    {
        cin >> t;
        ans += t;
    }
    cout<<-ans<<endl;
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