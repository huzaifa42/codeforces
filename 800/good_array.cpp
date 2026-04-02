#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int t;
    cin>>t;
    n--;
    int ans=0;
    while(n--){
        int ne;
        cin>>ne;
        if(t%2 == ne%2){
           // cout<<ne<<" "<<endl;
            ans++;
        }
        t=ne;
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