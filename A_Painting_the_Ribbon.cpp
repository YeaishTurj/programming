#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define w(t) int t; cin>>t; while(t--)
#define nn "\n"
#define int long long
#define pb push_back
#define ld long double
int binPow(int n, int k){
    int turj=1;
    while(k){if(k&1) turj*=n; n*=n, k>>=1;}
    return turj;
}
bool compare(pair<int,int>&a, pair<int,int>&b){
    if(a.first!=b.first){
        if(a.first<b.first) return false;
    }else{
        if(a.second>b.second) return false;
    }
    return true;
}
int32_t main(){
    fast_IO
    w(t){
        int n,m,k; cin>>n>>m>>k;
        if(m==1) cout<<"NO"<<nn;
        else{
            if(m>=n){
                if(k>=n-1) cout<<"NO"<<nn;
                else cout<<"YES"<<nn;
            }else{
                if(n%m==0){
                    if(k>=n-n/m) cout<<"NO"<<nn;
                    else cout<<"YES"<<nn;
                }else{
                    if(k>=n-n/m-1) cout<<"NO"<<nn;
                    else cout<<"YES"<<nn;
                }
            }
        }
    }
    return 0;
}