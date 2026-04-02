#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector<int> a;
    int n;
    cin>>n;
    int x;
    cin>>x;
    n--;
    a.push_back(x);
    while(n--){
        int t;
        cin>>t;
        if(x>t){
            a.push_back(1);
        }
        a.push_back(t);
        x=t;
    }
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<endl;
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