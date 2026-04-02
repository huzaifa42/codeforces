#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    long long n,k;
    cin>>n>>k;
     if(n%2==0){
        cout<<"YES"<<endl;
     }
     else if(k%2){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
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