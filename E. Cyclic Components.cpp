// author : Sajid Ayman
// problem : https://codeforces.com/contest/977/problem/E
#include <bits/stdc++.h>
#define  ve           vector
#define  ll           long long
#define  ld           long double
#define  fi           first
#define  se           second
#define  tc           ll tc;cin>>tc;while(tc--)
#define  to           ll to=1;while(to--)
#define  all(x)       (x).begin(), (x).end()
#define  allr(x)       (x).rbegin(), (x).rend()
#define  Shittt       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  input(n,arr) for (ll int i = 0; i < n; ++i) cin >> arr[i];
#define  vp           ve<pair<ll,ll>>
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
vv
ve<bool>vis;
bool f=true;
void dfs(int i){
    if(vis[i]) kill;
    vis[i]=1;
    if(v[i].size()!=2)f=false;
    for (auto j:v[i]) {
        dfs(j);
    }
}
void sol() {
    int n,m; cin>>n>>m;
    vis.resize(n+1,false);
    v.resize(n+1);
    for (int i = 0; i <m; ++i) {
        int x,y;cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    int res=0;
    for (int i = 1; i <=n; ++i) {
        f=true;
        if(!vis[i]){
            dfs(i);
            if(f){res++;}
        }

    }
    cout<<res<<endl;
}
int main() {
     Shittt
    //haha(6);
    to{
        sol();
    }
      Error404
}
/*
17 15
1 8
1 12
5 11
11 9
9 15
15 5
4 13
3 13
4 3
10 16
7 10
16 7
14 3
14 4
17 6
res 2
*/