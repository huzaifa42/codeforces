#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; int k;
    cin>>n>>k;
    bool br=false;
    while(n--){
        int t;
        cin>>t;
        if(t==k){
            br=true;
        }

    }
    if(!br)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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