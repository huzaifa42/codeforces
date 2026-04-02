#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int d1=d-b;
    if(d1<0){
        cout<<-1<<endl;
        return;
    }
    int d2=c-d1;
    int ans=d1;
    if(d2>a){
        cout<<-1<<endl;
        return;
    }
    cout<<d1+(a-d2)<<endl;
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