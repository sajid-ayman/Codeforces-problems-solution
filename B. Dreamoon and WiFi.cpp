// author : Sajid Ayman
// problem : https://codeforces.com/contest/476/problem/B
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
#define  input(n,arr) for (ll int i = 0; i < n; ++i) cin >> arr[i];
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
    string s1,s2;cin>>s1>>s2;
    int sum=0,sum2=0,q=0;
    for (int i = 0; i <s1.length(); ++i) {
        if(s1[i]=='+')sum++;
        else sum--;
    }
    for (int i = 0; i < s2.length(); ++i) {
        if(s2[i]=='+')sum2++;
        else if(s2[i]=='-')sum2--;
        else q++;
    }
//    cout<<sum<<" "<<sum2<<" "<<q<<nl;
//    cout<<(1<<q)<<nl;
      if(!q){sum!=sum2?cout<<(ld)0:cout<<(ld)1;kill}
      ld res1=0, res2=0;
      for (int i = 0; i < 1<<q; ++i) {
         ve<int >v;
         v.resize((1<<q));
         int t=i;
         int idx=0;
         while (t){
             v[idx]=t%2;
             idx++;
             t/=2;
         }
//         cout<<i<<nl;
//        for (int j = 0; j < q; ++j) {
//            cout<<v[j]<<" ";
//        }
//        cout<<nl;
         int tmp=sum2;
         for (int j = 0; j <q ; ++j) {
            if(v[j]==1)tmp++;
            else tmp--;
         }
         if(tmp==sum)res1++;
         else res2++;
    }
//    cout<<res1<<" "<<res2<<nl;
    cout<<(ld)(res1/(res2+res1));
}
int main() {
    Shittt
    haha(12);
    to{
        sol();
    }
    Error404
}
/*
+-+-
+-??
0.500000000000
*/