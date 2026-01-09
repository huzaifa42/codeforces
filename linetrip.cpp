#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,x;
    cin>>n>>x;
    int gap=0;
    int prev=0;
    while(n--){
        int t;
        cin>>t;
            gap=max(gap,t-prev);
            prev=t;
    }
    gap=max(gap,(x-prev)*2);
    cout<<gap<<endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}