// author : Sajid Ayman
// problem :https://codeforces.com/contest/714/problem/B
#include <bits/stdc++.h>
#define  ve           vector
#define  ll           long long
#define  ld           long double
#define  fi           first
#define  se           second
#define  tc           ll tc;cin>>tc;while(tc--)
#define  to           ll to=1;while(to--)
#define  all(x)       (x).begin(), (x).end()
#define  allr(x)      (x).rbegin(), (x).rend()
#define  Shittt       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  input(n,arr) for ( int i = 0; i < n; ++i) cin >> arr[i];
#define  kill         return ;
#define  pb(x)        push_back(x)
#define  haha(x)      cout<<fixed<<setprecision(x);
#define  nl           '\n'
#define  yes          cout<<"YES"<<nl;
#define  no           cout<<"NO"<<nl;
#define  vv           ve<ve<ll>>v;
#define  Error404       return 0;
//if(i<1||j<1||i>n||j>m)
using namespace std;
const double PI=3.14159265359;
const int N = 2e5+5;
const int Mod = 1e9+7;
void sol() {
    int n;
    cin >> n;
    ll arr[n];
    input(n, arr)
    set<ll> s;
    for (int i = 0; i < n; ++i) {
        s.insert((arr[i]));
    }
    ve<ll> v;
    if(s.size()>3){no kill}
    if (s.size() <3) {
        yes
        kill
    }
    for (auto it: s) {
        v.push_back(it);
    }
    if(v[2]-v[1]==v[1]-v[0]){yes }
    else no

}
int main() {
    Shittt
     //haha(12)
     to{
        sol();
     }
        Error404
}
/*

*/