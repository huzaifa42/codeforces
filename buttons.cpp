#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int a=0;
    int b=0;
    int c=0;
    cin>>a>>b>>c;
    if(a==b){
        if(c%2)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    else if(a>b) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    

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