#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int f;
    cin>>f;
    int t;
    n--;
    bool br=false;
    while(n){
        cin>>t;
        if(f>t && !br){
            cout<<"NO"<<endl;
            br=true;
        }
        n--;
    }
    if(!br)cout<<"YES"<<endl;
    return ;
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