// author : Sajid Ayman
// problem : https://codeforces.com/contest/469/problem/B
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
void sol() {
   int n,m,l,r; cin>>n>>m>>l>>r;
   ve<pair<int ,int >>a,b;
    for (int i = 0; i <n; ++i) {
        int x,y;cin>>x>>y;
        a.push_back({x,y});
    }
    for (int i = 0; i < m; ++i) {
        int x,y;cin>>x>>y;
        b.push_back({x,y});
    }
    int res=0;
    for (int k = l; k <=r; ++k) {
        int f=0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int c = max(b[j].fi +k, a[i].fi);
                int d = min(b[j].se + k, a[i].se);
                if (c <= d) {
                    res++;f++;
                    break;
                }
            }
            if(f)break;
        }

    }
    cout<<res;
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