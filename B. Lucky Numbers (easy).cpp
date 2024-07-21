// author : Sajid Ayman
// problem :
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
vector<bool>vis;
vector<vector<int>>v;
void sol() {
    int n;cin>>n;
    for (int i = 1; i <=n-1; ++i) {
        int t;cin>>t;
        v[t].push_back(i);
        v[i].push_back(t);
    }
    queue<int>bfs;
    bfs.push(1);
    vis[1]=true;
    while(!bfs.empty()){
        int i=bfs.front();
        bfs.pop();
        int cnt=0;
        if(v[i].size()>1) {
            for (auto it: v[i]) {
                if (!vis[it]) {
                    if (v[it].size() == 1)cnt++;
                    bfs.push(it);
                    vis[it] = true;
                }
            }
            if(cnt<3) { no exit(0); }
        }
    }
    yes
}
int main() {
    Shittt
    for (ll i = 1; i*i*i <=1e12 ; ++i) {
        vis[i*i*i]=true;
    }
    //haha(12)
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    tc{
        sol();
    }
    Error404
}
/*

*/
