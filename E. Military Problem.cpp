// author : Sajid Ayman
// problem : https://codeforces.com/contest/1006/problem/E
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
vector<int>st,en,res;
int cnt;
void dfs(int i){
    st[i]=cnt;
    cnt++;
    res.push_back(i);
    for(auto it:v[i]){
            dfs(it);
    }
    en[i]=cnt;
}
void sol() {
    int n,m; cin>>n>>m;
    v.resize(n+1);
    st.resize(n+1);
    en.resize(n+1);
    for(int i=2;i<=n;i++){
        int t;cin>>t;
        v[t].push_back(i);
    }
    dfs(1);
    while(m--){
        int x,y; cin>>x>>y;
        if(en[x]-st[x]<y)cout<<-1<<nl;
        else cout<<res[st[x]+y-1]<<nl;
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
9 6
1 1 1 3 5 3 5 7
3 1
1 5
3 4
7 3
1 8
1 9

3
6
8
-1
9
4
*/
