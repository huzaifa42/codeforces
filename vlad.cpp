#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int m=10;
    int n=10;
    int ans=0;
    char x;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            int ti=min(i,11-i);
            int tj=min(j,11-j);
            cin>>x;
            if(x=='X'){
                ans+=min(ti,tj);
            }
        }
    }
    cout<<ans<<endl;
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