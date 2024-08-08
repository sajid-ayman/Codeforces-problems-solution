//author : Sajid Ayman
// problem : https://codeforces.com/contest/271/problem/B
#include <bits/stdc++.h>
#define  ll           long long
#define  ld           long double
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
const int N = 1e5+5, Mod = 1e9+7;
void sol() {
   vector<int>v;
   vector<bool> prime(150000,false);
    for (int i = 2; i*i<=150000; ++i) {
       int m=2;
       if(!prime[i]) {
           while (i * m < 150000) {
               prime[i * m] = true;
               m++;
           }
       }
    }
    for (int i = 2; i <=150000; ++i)
         if(!prime[i])v.push_back(i);
//    for (int i = 0; i <v.size(); ++i)cout<<v[i]<<' ';
//    cout<<nl;
    int idx=0;
    int val[150000];
    for(int i=0;i<150000;i++){
        if(i<v[idx])val[i]=v[idx]-i;
        else val[i]=0,idx++;
    }
//    for(int i=0;i<20;i++)cout<<val[i]<<' ';
//    cout<<nl;
    int n,m; cin>>n>>m;
    ll mn=Mod,mn2=Mod;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    ll sum=0;
    for (int i = 0; i < n; ++i) {
        sum=0;
        for (int j = 0; j < m; ++j)
            sum+=val[arr[i][j]];
        if(mn>sum)idx=i,mn=sum;
    }
    for (int i = 0; i <m; ++i) {
        sum=0;
        for (int j = 0; j <n; ++j)
            sum+=val[arr[j][i]];
        mn2=min(mn2,sum);
    }
//    cout<<mn<<' '<<mn2<<nl;
    cout<<min(mn,mn2)<<nl;
}
int main() {
    Shittt
    //haha(12)
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    to {
        sol();
    }
    Error404
}
/*

*/