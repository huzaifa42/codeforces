#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int ne=0;
    int no=0;
    while(n--){
        int t;
        cin>>t;
        if(t%2==0)ne++;
        else no++;
    }
    if(no%2)cout<<"NO"<<endl;
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