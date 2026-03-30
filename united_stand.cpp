#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int tn=n;
    int maxi=0;
    int fr=0;
    vector<int> a;
    while(n--){
        int t;
        cin>>t;
        a.push_back(t);
        if(t==maxi)fr++;
        else if(t>maxi){
            fr=1;
            maxi=t;
        }
    }
    if(fr==tn){
        cout<<-1<<endl;
        return;
    }
    sort(a.begin(),a.end());
    int ci=0;
    while(a[ci]==a[0]){
        ci++;
    }
    cout<<ci<<" "<<tn-ci<<endl;
    for(int i=0;i<ci;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=ci;i<tn;i++){
        cout<<a[i]<<" ";
    }
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