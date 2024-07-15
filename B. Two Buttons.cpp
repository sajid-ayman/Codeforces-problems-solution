// author : Sajid Ayman
// problem : https://codeforces.com/contest/520/problem/B
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
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v;
    queue<int>q;
    bool vis[N];
    int val[N];
    q.push(n);
    int t=1;
    while(!q.empty()){
        int x=q.front();
        int x2=2*x;
        int y=val[x];
        if(x==m){
            cout<<y<<"\n";
            return;
        }
        q.pop();

        if(x<m&&vis[x2]==0){
            val[x2]=y+1;
            vis[x2]=1;
            q.push(x2);
        }

        if(x>1&&vis[x-1]==0){
            val[x-1]=y+1;
            vis[x-1]=1;
            q.push(x-1);
        }
    }
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
4 6
res : 2

10 1
res : 9
*/