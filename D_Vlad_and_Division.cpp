#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) ll t; cin>>t; while(t--)
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
bool compare(pair<ll,ll>&a, pair<ll,ll>&b){
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
        map<vector<ll>,ll>m;
        for(int i=0; i<n; i++){
            ll x; cin>>x;
            vector<ll>num;
            for(int i=0; i<31; i++){
                num.pb(!!(x&(1<<i)));
            }
            m[num]++;
        }
        ll ans=n;
        // for(auto &it: m) cout<<it.first<<"->"<<it.second<<" "; cout<<nn;
        for(auto &it: m){
            vector<ll>inverse;
            for(auto &jt: it.first){
                inverse.pb(!jt);
            }
            if(it.second && m.find(inverse)!=m.end() && m[inverse]){
                ll mn=min(it.second,m[inverse]);
                ans-=mn;
                it.second-=mn;
                m[inverse]-=mn;
            }
        }
        cout<<ans<<nn;
        // cout<<"------------------------------"<<nn;
    }
    return 0;
}