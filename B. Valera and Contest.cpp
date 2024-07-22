// author : Sajid Ayman
// problem : https://codeforces.com/contest/369/problem/B
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
   int n,k,l,r,sall,sk;
   cin>>n>>k>>l>>r>>sall>>sk;
   vector<int>v(n);
   int remind=sk%k;
   for (int i = 0; i < k; ++i) {
        v[i]=(sk/k)+(remind>0);
        remind--;
   }

//   cout<<diff<<nl;
//   cout<<diff/(n-k)<<nl;
//   cout<<remind2<<nl;
   if(n!=k) {
       int diff=sall-sk;
       int remind2=diff%(n-k);
       for (int i = k; i < n; i++) {
           v[i] = (diff / (n - k)) + (remind2 > 0);
           remind2--;
       }
   }
   for(int i=n-1;i>=0; i--) cout<<v[i]<<' ';
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
5 3 1 3 13 9
*/
