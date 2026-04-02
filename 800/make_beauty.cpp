#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> p;
    while(n--){
        int t;
        cin>>t;
        p.push_back(t);
    }
    sort(p.begin(),p.end(),greater<int>());
    if(p[0]==p[p.size()-1]){
        cout<<"NO"<<endl;
        return ;
    }
    else{
        cout<<"YES"<<endl;
        if(p[0]==p[1]){
            cout<<p[0]<<" ";
            cout<<p[p.size()-1]<<" ";
            for(int i=1;i<p.size()-1;i++){
                cout<<p[i]<<" ";
            }
            cout<<endl;
        }else{
            for(int i=0;i<p.size();i++){
                cout<<p[i]<<" ";
            }
            cout<<endl;
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