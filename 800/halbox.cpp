#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    int t=n;
    while(t--){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    bool s=true;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            s=false;
            break;
        }
    }
    if(s) cout<<"YES"<<endl;
    else if(k>1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

        int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}