#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define ll long long
#define pb push_back
#define ld long double
ll binPow(ll n, ll k){
    if(k==0) return 1;
    else{
        ll turj=1;
        while(k){if(k&1) turj*=n; n*=n, k>>=1;}
        return turj;
    }
}
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
        return true;
    }else{
        if(a.second>b.second) return false;
        return true;
    }
}
int main(){
    fast_IO
    w(t){
        ll n; cin>>n;
        vector<pair<ll,ll>>v;
        for(int i=0; i<n; i++){
            ll a, b; cin>>a>>b;
            v.pb({a,b});
        }
        sort(v.begin(), v.end());
        // for(auto &it: v) cout<<it.first<<" "<<it.second<<nn;
        Oset s;
        ll res=0;
        for(int i=n-1; i>=0; i--){
            s.insert(v[i].second);
            res+=s.order_of_key(v[i].second);
        }
        cout<<res<<nn;
        // cout<<"------------------"<<nn;
    }
    // set<ll>s={5,5,4,5,3,2};
    // for(auto &it: s) cout<<it<<" "; cout<<nn;
    // cout<<s.
    return 0;
}