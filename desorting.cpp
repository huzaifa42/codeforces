#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int tn=n;
    int mind=INT_MAX;
    n--;
    int prev;
    cin>>prev;
    while(n--){
        int t;
        cin>>t;
        mind=min(t-prev, mind);
        prev=t;
    }
    if(mind<0) cout<<0<<endl;
    else if(mind==0) cout<<1<<endl;
    else{
        if(mind%2==1){
            cout<<(mind+1)/2<<endl;
        }else{
            cout<<mind/2+1<<endl;
        }
    }
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