// author : Sajid Ayman
// problem : https://codeforces.com/contest/1681/problem/D

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
void sol() {
    ll n,t;cin>>n>>t;
    ll tt=t;
    if(t==1){cout<<-1;kill}
    map<ll,bool>vis;
    queue<pair<ll,int>>q;
    vis[t]=1;
    q.push({t,0});
    while(!q.empty()){
        ll num=q.front().first;
        int cnt=q.front().second;
        q.pop();
        ll tmp=num;
        set<int>digit;
        int lnth=0;
        while(tmp){
            int mod=tmp%10;
            digit.insert(mod);
            lnth++;
            tmp/=10;
        }
        if(lnth==n){ cout<< cnt<<nl; exit(0);}
        for (auto it:digit){
            if(it>1&&!vis[num*it]&&it*t<LONG_LONG_MAX){
                q.push({it*num,cnt+1});
                vis[it*num]=true;
            }
        }
    }
    cout<<-1<<nl;
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

*/