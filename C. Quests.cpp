// author : Sajid Ayman
// problem : https://codeforces.com/contest/1914/problem/C
#include <bits/stdc++.h>
#define  ve           vector
#define  ll           long long
#define  ld           long double
#define  fi           first
#define  se           second
#define  pb(x)        push_back(x)
#define  tc           ll tc;cin>>tc;while(tc--)
#define  to           ll to=1;while(to--)
#define  all(x)       (x).begin(), (x).end()
#define  Shittt       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  input(n,arr) for (ll int i = 0; i < n; ++i) cin >> arr[i];
#define  vp           ve<pair<ll,ll>>
#define  kill         return ;
#define  pb(x)        push_back(x)
#define  haha(x)      cout<<fixed<<setprecision(x);
#define  yes          cout<<"YES"<<endl;
#define  no           cout<<"NO"<<endl;
#define  Finish       return 0;
using namespace std;
const int N = 2e5+5;
const int Mod = 1e9+7;
void sol() {
   int a,b;cin>>a>>b;
   ll arr[a],arr2[a];
   ll mx=0,res=0,sum=0;
   input(a,arr)
    for (int i = 0; i < a; ++i) {
        cin >> arr2[i];

        if (i + 1 <= b) {
            mx = max(arr2[i], mx);
            sum += arr[i];
            res = max(res, ((b - i - 1) * mx) + sum);
        }
    }
    cout<<res<<endl;
}
int main() {
    Shittt
    //haha(6);
    tc  {
        sol();
    }
    Finish
}