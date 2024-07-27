#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
void solve(){
    int n,m; cin>>n>>m;
    int b[n][m];
    int I=-1,J=-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x; cin>>x;
            b[i][j]=n*m-x+1;
            if(x==n*m-x+1){
                I=i,J=j;
            }
        }
    }
    // cout<<I<<" "<<J<<nn;
    int flag=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((i!=I || j!=J) && I!=-1 && J!=-1){
                swap(b[i][j],b[I][J]);
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(flag || (n*m)%2==0){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<b[i][j]<<" ";
            }
            cout<<nn;
        }
    }else cout<<-1<<nn;
}
int32_t main(){
    fast_IO
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        // cout<<"-----------"<<nn;
    }
    return 0;
}