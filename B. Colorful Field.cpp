// author : Sajid Ayman
// problem : https://codeforces.com/contest/79/problem/B
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
ve<int>v;
map<pair<int,int>,int>mp;
void sol() {
    string arr[3]={"Grapes","Carrots","Kiwis"};
    int n,m,w,k;cin>>n>>m>>w>>k;
    for (int i = 0; i <w; ++i) {
        int r,c;cin>>r>>c;
        mp[{r,c}]++;
        v.push_back(((r-1)*m)+c);
       // cout<<v[i]<<" ";
    }
    sort(all(v));
    cout<<nl;
    for (int i = 0; i < k; ++i) {
        int x,y;cin>>x>>y;
        if(mp[{x,y}])cout<<"Waste"<<nl;
        else {
            int t=((x-1)*m)+y;
            if(v.size()==0)cout<<arr[t%3]<<nl;
            else{
            //    yes
                int idx= lower_bound(all(v),t)-v.begin();
                cout<<arr[(t-idx)%3]<<nl;
            }
        }
    }
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

*/