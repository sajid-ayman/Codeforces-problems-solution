// author : Sajid Ayman
// problem : https://codeforces.com/contest/791/problem/B
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
vector<vector<int>>v;
vector<bool>vis;
int vertix;
vector<int>edj;
void dfs(int i){
    vis[i]=true;
    edj.push_back(v[i].size());
    vertix++;
    for (auto j:v[i]) {
        if(!vis[j])dfs(j);
    }
}
void sol() {
    int n,m;cin>>n>>m;
    v.resize(n+1);
    vis.resize(n+1,false);
    for (int i = 0; i <m; ++i) {
        int x,y;cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 1; i <=n; ++i) {
        if(!vis[i]){
            edj.clear();
            vertix=0;
            dfs(i);
//          cout<<vertix<<' '<<edj<<nl;
            for (int j = 0; j < edj.size(); ++j) {
                if(edj[j]!=vertix-1){no kill}
            }
        }
    }
    yes
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
10 4
4 3
5 10
8 9
1 2
*/
