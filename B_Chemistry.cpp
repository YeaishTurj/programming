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
bool compare(pair<int,char>&a, pair<int,char>&b){
    if(a.first!=b.first){
        if(a.first>b.first) return false;
        return true;
    }else{
        if(a.second>b.second) return false;
        return true;
    }
}
int main(){
    fast_IO
    w(t){
        int n, k; cin>>n>>k;
        string str; cin>>str;
        map<char,int>mp, np;
        for(auto &it: str){
            mp[it]++;
        }
        int odd=0;
        for(auto &it: mp){
                if(it.second&1) odd++;
        }
        // convert all odd to even, count the left of K
        int left_k_first=k-odd;
        // convert all odd to even, except one odd, count the left of K
        int left_k_second=k-odd+1;
        if((left_k_first%2==0 && left_k_first>=0) || (left_k_second%2==0 && left_k_second>=0)) cout<<"YES"<<nn;
        else cout<<"NO"<<nn;
        // cout<<"-------------"<<nn;
    }
    return 0;
}


/*
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
        int n, k; cin>>n>>k;
        string str; cin>>str;
        map<char,int>m;
        for(auto &it: str) m[it]++;
        int odd=0, even=0;
        for(auto &it: m)
            if(it.second&1) odd++;
            else even++;
        if(k-odd>=0) cout<<"YES"<<nn;
        else{
            if((odd-k)==1) cout<<"YES"<<nn;
            else cout<<"NO"<<nn;
        }
        // cout<<"-------------"<<nn;
    }
    return 0;
}
*/