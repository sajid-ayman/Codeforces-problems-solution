// author : Sajid Ayman
// problem : https://codeforces.com/contest/35/problem/C
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
// const int dx[8]={0, 0, 1, -1, 1, -1, -1, 1}, dy[8]={1, -1, 0, 0, 1, -1, 1, -1};
const int N = 2e5+5, Mod = 1e9+7;
void sol() {
    int n,m,k;cin>>n>>m>>k;
    bool vis[n+1][m+1]{};
    queue<pair<int,int>>q;
    int x,y;
    while(k--){
        cin>>x>>y;
        vis[x][y]=true;
        q.push({x,y});
    }
    while(!q.empty()){
        x=q.front().first,y=q.front().second;
        q.pop();
        if(x+1<=n&& vis[x+1][y]==0){
            q.push({x+1,y});  vis[x+1][y]=1;
        }
        if(x-1>0&&vis[x-1][y]==0){
            q.push({x-1,y});  vis[x-1][y]=1;
        }
        if(y+1<=m&&vis[x][y+1]==0){
            q.push({x,y+1});  vis[x][y+1]=1;
        }
        if(y-1>0&&vis[x][y-1]==0){
            q.push({x,y-1});  vis[x][y-1]=1;
        }
    }

    cout<<x<<" "<<y;
}
int main() {
    Shittt
    //haha(12)
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    to{
        sol();
    }
    Error404
}
/*

*/