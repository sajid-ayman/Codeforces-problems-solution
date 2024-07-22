// author : Sajid Ayman
// problem : https://codeforces.com/contest/702/problem/B
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
    vector<ll> v;
    map<ll, pair<ll,ll>> mp;
    for (int i = 0; i <= 34; ++i) {
        v.push_back(1LL << i);
    }
//    for(ll i=0;i<60;i++)cout<<v[i]<<' ';
    vector<ll>elements;
    int n;
    cin >> n;
    vector<ll>arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]].first++;
        if(mp[arr[i]].first==1)elements.push_back(arr[i]);
    }
    sort(all(arr));
//    for (auto it: st)cout << it << ' ';
//    cout<<nl;
    int idx=0;
    for (int i = 0; i <arr.size(); i++) {
        mp[arr[i]].second = idx;
        idx++;
//        arr.pop_front();
    }
//     for(auto s:st)cout<<mp[s].second<<' ';
    ll res = 0;
    for (auto it: elements) {
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] > it && mp[v[i] - it].first > 0) {
                if (mp[v[i] - it].second > mp[it].second) {
                    ll val=( mp[it].first * mp[v[i] -it].first);
                    res+=val;
//                    cout<<v[i]<<nl;
                }
                else if (v[i] / 2 == it) {

                    ll val=(((mp[it].first) -1) * mp[it].first) / 2;
                    res+=val;
                    //                    cout << v[i] << nl;
                }
            }
        }
    }
    cout << res << nl;
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