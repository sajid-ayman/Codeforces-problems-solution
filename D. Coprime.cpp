// author : Sajid Ayman
// problem : https://codeforces.com/contest/34/problem/D
#include <bits/stdc++.h>
#define  ve           vector
#define  ll           long long
#define  ld           long double
#define  fi           first
#define  se           second
#define  pb(x)        push_back(x)
#define  tc           ll tc;cin>>tc;while(tc--)
#define  to           ll to=1;while(to--)
#define  all(x)       (x).begin(), (x).end()
#define  Shittt       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  input(n,arr) for (ll int i = 0; i < n; ++i) cin >> arr[i];
#define  vp           ve<pair<ll,ll>>
#define  kill         return ;
#define  pb(x)        push_back(x)
#define  haha(x)      cout<<fixed<<setprecision(x);
#define  yes          cout<<"YES"<<endl;
#define  no           cout<<"NO"<<endl;
#define  Finish       return 0;
using namespace std;
const int N = 2e5+5;
const int Mod = 1e9+7;
ve<ve<ll>>v;
ve<int>vis;
ve<int>ne;
void dfs(int i,int pr){
    vis[i]=1;
    for (auto j:v[i]) {
        if(vis[j])continue;
        else{
            ne[j]=i;
            dfs(j,i);
        }
    }
}
void sol() {
   int n,r1,r2;cin>>n>>r1>>r2;
   v.resize(n+1);
   vis.resize(n+1);
   ne.resize(n+1);
    for (int i = 1; i <=n; ++i) {
        if(i==r1)continue;
        int t;cin>>t;
        v[t].push_back(i);
        v[i].push_back(t);
    }
    dfs(r2,-1);
    for (int i = 1; i <=n; ++i) {
        if(i==r2)continue;
        cout<<ne[i]<<" ";
    }
}
int main() {
    Shittt
    //haha(6);
    to{
        sol();
    }
    Finish
}