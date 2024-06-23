// author : Sajid Ayman
// problem : https://codeforces.com/contest/1980/problem/D
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
#define  haha(x)      cout<<fixed<<setprecision(x);
#define  yes          cout<<"YES"<<endl;
#define  no           cout<<"NO"<<endl;
using namespace std;
const int N = 2e5+5;
const int Mod = 1e9+7;
void sol() {
    int n,c=0;cin>>n;
    ll arr[n];
    input(n,arr)
    if(n<4) {yes;kill;}
    ll sor=0,la=0;
    for (int i = 1; i <n-1; ++i) {
        ll val=gcd(arr[i],arr[i+1]);
        if(val<la){sor=1;break;}
        la=val;
    }
    if(!sor){cout<<"YES"<<endl;return;}
    ll last=0,f=0;
    ve<ll>v;
    for (int i = 0; i <n-1; ++i) {
        ll val = gcd(arr[i], arr[i + 1]);
        if(val>=last){
            last=val;
        }
        else {
            v.push_back(i);break;
        }
    }
    if(v.size()==0||v[0]==n-2)yes
    else{
        ll t1=0,t2=0,t3=0,l1=0,l2=0,l3=0;
        for (int i = 0; i <n-1; ++i) {
            ll val=gcd(arr[i],arr[i+1]);
            if(i==v[0]){
                val=gcd(arr[i],arr[i+2]);
                ++i;
            }
            if(val<l1){t1=1;break;}
            l1=val;
        }
        for (int i = 0; i <n-1; ++i) {
            ll val=gcd(arr[i],arr[i+1]);
            if(i==v[0]-1){
                val=gcd(arr[i],arr[i+2]);
                ++i;
            }
            if(val<l2){t2=1;break;}
            l2=val;
        }
        for (int i = 0; i <n-1; ++i) {
            ll val=gcd(arr[i],arr[i+1]);
            if(i==v[0]-2){
                val=gcd(arr[i],arr[i+2]);
                ++i;
            }
            if(val<l3){t3=1;break;}
            l3=val;
        }
        if(t1&&t2&&t3)no
        else yes
    }
}
int main() {
        Shittt
    //haha(6);
    tc {
        sol();
    }
    return 0;
}
