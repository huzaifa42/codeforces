#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int maxi=0;
    int curr=0;
    while(n--){
        int t;
        cin>>t;
        if(t==1){
            curr=0;
        }
        else{
            curr++;
        }
        maxi=max(maxi,curr);
    }
    cout<<maxi<<endl;
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