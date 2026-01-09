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
    int c = 0;
    string s;
    cin>>s;
    for(auto t:s){
    
        //cin >> t;
        if (t == '.')
        {
            c++;
        }
        else
        {
            if (c >= 3)
            {
                cout << 2 << endl;
                return;
            }
            ans += c;
            c = 0;
        }
    }
    if (c >= 3)
    {
        cout << 2 << endl;
        return;
    }

    ans += min(2, c);
    cout << ans << endl;
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