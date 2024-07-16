// author : Sajid Ayman
// problem : https://codeforces.com/contest/242/problem/C
#include <bits/stdc++.h>
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
#define  Error404       return 0;
//if(i<1||j<1||i>n||j>m)
using namespace std;
const double PI=3.14159265359;
const int dx[8]={0, 0, 1, -1, 1, -1, -1, 1}, dy[8]={1, -1, 0, 0, 1, -1, 1, -1};
const int N = 2e5+5, Mod = 1e9+7;
map<pair<ll,ll>,bool>vis;
set<pair<ll,ll>>allow;
map<pair<ll,ll>,int>dis;
void sol() {
    ll x,y,x2,y2;cin>>x>>y>>x2>>y2;
    ll n;cin>>n;
    for (int i = 0; i < n; ++i) {
        ll r,a,b;cin>>r>>a>>b;
        for (ll j = a; j <=b; ++j) {
            allow.insert({r, j});
        }
    }
    if (allow.find({x2,y2}) == allow.end()){
        cout<<-1<<nl; kill;
    }
    if (x2==x && y2 == y){
        cout<<0<<nl; kill;
    }
    vis[{x,y}]=true;
    dis[{x,y}]=0;
    queue <pair<int ,int>>q;
    q.push({x,y});
    while(!q.empty()){
        int a=q.front().first;
        int b=q.front().second;
        q.pop();
        for (int i = 0; i <8; ++i) {
            if (!vis[{a + dx[i], b + dy[i]}] && allow.find({a + dx[i], b + dy[i]}) != allow.end()) {
                q.push({a + dx[i], b + dy[i]});
                dis[{a + dx[i], b + dy[i]}] = dis[{a, b}] + 1;
                if(a+dx[i]==x2&&y+dy[i]==y2){cout<<dis[{x2,y2}]<<nl;kill;}
                vis[{a+dx[i],b+dy[i]}]=true;
            }
        }
    }
    if(!vis[{x2,y2}])cout<<-1<<nl;
    else cout<<dis[{x2,y2}];
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
1 1 2 10
2
1 1 3
2 6 10
-------
5 7 6 11
3
5 3 8
6 7 11
5 2 5
*/