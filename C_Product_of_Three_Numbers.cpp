#include<bits/stdc++.h>
using namespace std;
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
        ll a=2,b,c,flag=0;
        while(a*a*a<=n){
            if(n%a==0){
                ll m=n/a;
                b=2;
                while(b*b<=m){
                    if(m%b==0){
                        ll o=m/b;
                        c=o;
                        // cout<<a<<" "<<b<<" "<<c<<nn;
                        if(a!=b && b!=c && c!=a){
                            flag=1; goto khatam;
                        }
                    }
                    b++;
                }
            }
            a++;
        }
        khatam:
        if(flag) cout<<"YES"<<nn<<a<<" "<<b<<" "<<c<<nn;
        else cout<<"NO"<<nn;
        // cout<<"--------------"<<nn;
    }
    return 0;
}