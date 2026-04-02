#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,t;
    cin>>n>>t;
    string s,x;
    cin>>x>>s;
    int i=0;
    while(x.size()<s.size()){
        x+=x;
        i++;
    }
    if(x.find(s)!=string::npos){
        cout<<i<<endl;
        return;
    }
    x+=x;
    i++;
     if(x.find(s)!=string::npos){
        cout<<i<<endl;
        return;
    }
    cout<<-1<<endl;
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