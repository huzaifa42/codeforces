#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int neg=0;
    int pos=0;
    while(n--){
        int t;
        cin>>t;
        if(t==-1)neg++;
        else pos++;
    }
    int ans=0;
    while(pos<neg){
        pos++;
        neg--;
        ans++;
    }
    if(neg%2) ans++;
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