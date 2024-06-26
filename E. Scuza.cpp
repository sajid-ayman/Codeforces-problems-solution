// author : Sajid Ayman
// problem :https: //codeforces.com/contest/1742/problem/E
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
bool valid(int mid,ll val,ve<ll>&v){
    return v[mid]>val;
}
void sol() {
    int n,q;cin>>n>>q;
    ll a[n],ma=0;
    ll pre[n+1];pre[0]=0;
    vector<ll>v;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        pre[i+1]=pre[i]+a[i];
        ma=max(a[i],ma);
        v.push_back(ma);
    }
    //no
//    for (int i = 0; i <n; ++i) {
//        cout<<v[i]<<" ";
//    }cout<<endl;
//    for (int i = 1; i <=n; ++i) {
//        cout<<pre[i]<<" ";
//    }
//    cout<<endl;
    for (int i = 0; i <q; ++i) {
        ll t;
        cin >> t;//yes
        if (t < v[0])cout << 0 << " ";
        else if (t >= v[n - 1])cout << pre[n] << " ";
        else {
            int r = n-1, l = 0, mid;
            while (r - l > 1) {
                mid = (r + l) / 2;
                if (valid(mid, t, v))r = mid;
                else l = mid;
            }
            cout <<pre[l+1]<<" ";
        }

    }
}
int main() {
    Shittt
    //haha(6);
    tc{
        sol();
        cout<<endl;
    }
    Finish
}