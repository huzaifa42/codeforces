#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int tn=n;
    vector<char> a;
    //cout<<"size"<<" "<<n<<endl;
    while(n--){
        char t;
        cin>>t;
        a.push_back(t);
        //cout<<"t: "<<t<<endl;
    }
    int l=0;
    int r=tn-1;
    while(l<r){
        if(a[l]==a[r]) break;
        l++;
        r--;
    }
    cout<<r-l+1<<endl;
    
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