// author : Sajid Ayman
// problem : https://codeforces.com/contest/75/problem/C
#include <bits/stdc++.h>
#define  ll           long long
#define  ld           long double
#define  tc           ll tc;cin>>tc;while(tc--)
#define  to           ll to=1;while(to--)
#define  all(x)       (x).begin(), (x).end()
#define  allr(x)      (x).rbegin(), (x).rend()
#define  Shittt       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  kill         return ;
#define  pb(x)        push_back(x)
#define  haha(x)      cout<<fixed<<setprecision(x);
#define  nl           '\n'
#define  yes          cout<<"YES"<<nl;
#define  no           cout<<"NO"<<nl;
#define  Error404       return 0;
//if(i<1||j<1||i>n||j>m)
using namespace std;
const double PI=3.14159265359;
const int dx[8]={0, 0, 1, -1, 1, -1, -1, 1};
const int dy[8]={1, -1, 0, 0, 1, -1, 1, -1};
const int N = 2e5+5, Mod = 1e9+7;
bool valid(vector<ll>v,ll mid,ll goal){
    return goal >=v[mid];
}
void sol() {
    ll a,b;cin>>a>>b;
    vector<ll>div;
    ll n= gcd(a,b);
    for (int i = 1; i*i<=n; ++i) {
        if(i*i==n)div.push_back(i);
        else if(n%i==0){
            div.push_back(n/i);
            div.push_back(i);
        }
    }
    sort(all(div));
//    for(int i=0;i<div.size();i++)cout<<div[i]<<' ';
    cout<<nl;
    int q;cin>>q;
    while(q--){
        ll low,up;
        cin>>low>>up;
        ll l=0,r=div.size()-1;
        if(div[r]<low||div[0]>up)cout<<-1<<nl;
        else {
            ll mid;
            while(r-l>1){
                mid=(r+l)/2;
                if(valid(div,mid,up))l=mid;
                else r=mid;
            }
            if(div[r]<=up&&div[r]>=low)cout<<div[r]<<nl;
            else if(div[l]<=up&&div[l]>=low) cout<<div[l]<<nl;
            else cout<<-1<<nl;
        }
    }
}
int main() {
    Shittt
    //haha(12)
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    to{
        sol();
    }
    Error404
}
/*
90 36
16
13 15
5 28
11 30
26 35
2 8
19 36
3 17
5 14
4 26
22 33
16 33
18 27
4 17
1 2
29 31
18 36
*/