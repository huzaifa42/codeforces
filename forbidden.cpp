#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,k,x;
    cin>>n>>k>>x;
    if(x==1){
        if(k==1){
            cout<<"NO"<<endl;
        }
        else if(k==2 && n%2!=0){
            cout<<"NO"<<endl;
        }   
        else{
            cout<<"YES"<<endl;
            int c=0;
            int tn=n;
            if(n%2!=0){
                tn-=3;
                c++;
            }
            c+=tn/2;
            cout<<c<<endl;
            if(n%2!=0){
                cout<<3<<" ";
                n-=3;
            }
            while(n){
                cout<<2<<" ";
                 n-=2;
            }
            cout<<endl;
           
        }
    }
    else{
        cout<<"YES"<<endl;
        cout<<n<<endl;
        while(n--){
            cout<<1<<" ";
        }
        cout<<endl;
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