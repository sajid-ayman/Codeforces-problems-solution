// author : Sajid Ayman
// problem : https://codeforces.com/contest/1118/problem/F1
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
ve<ve<int>>edj;
int r=0,b=0,res=0;
int clr[300001];
int dfs(int i,int pr) {
    ll sum=0;
    if(clr[i]==1)sum++;
    else if(clr[i]==2)sum--;
    for (auto j :edj[i]) {
        if(j==pr)continue;
        sum+=dfs(j,i);
    }
    if(i!=1)
    {
        if(sum==r||sum==b)res++;
    }
//    cout<<i<<" "<<sum<<nl;
    return sum;
}
void sol() {
    int n;
    cin >> n;
    edj.resize(n+1);
    for (int i = 1; i <= n; ++i) {
        cin>>clr[i];
        if(clr[i]==1)r++;
        else if(clr[i]==2)b--;
    }
//    cout<<r<<" "<<b<<nl;
    for (int i = 0; i < n-1; ++i) {
        int x,y;cin>>x>>y;
        edj[x].push_back(y);
        edj[y].push_back(x);
    }
    dfs(1,-1);
    cout<<res<<nl;
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