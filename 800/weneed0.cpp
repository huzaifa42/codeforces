#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> a;
    while(n--){
        int t;
        cin>>t;
        a.push_back(t);
    }
    
    for(int i=0;i<256;i++){
        int c=0;
        for(auto &it:a){
            c^=(it^i);
        }
        if(c==0){
            cout<<i<<endl;
            return;
        }
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