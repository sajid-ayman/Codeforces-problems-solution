// author : Sajid Ayman
// problem : https://codeforces.com/contest/352/problem/B
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
#define  input(n,arr) for ( int i = 0; i < n; ++i) cin >> arr[i];
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
// const int dx[8]={0, 0, 1, -1, 1, -1, -1, 1}, dy[8]={1, -1, 0, 0, 1, -1, 1, -1};
const int N = 2e5+5, Mod = 1e9+7;
void sol() {
    int n;cin>>n;
    int seq[n];
    vector<vector<int>>v;
    v.resize(N);
    ll arr[n];
    set<int>st;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        st.insert(arr[i]);
        v[arr[i]].push_back(i);
    }
//    for (int i = 0; i <st.size() ; ++i) {
//        cout<<st[i]<<nl;
//    }
    vector<pair<int,int>>res;
    for (auto it:st) {
        if(v[it].size()==1)res.push_back({it,0});
        else {
            int fi=v[it][1]-v[it][0];
            bool f=true;
            for (int i = 1; i <v[it].size(); ++i) {
                if(v[it][i]-v[it][i-1]!=fi){f=false;break;}
            }
            if(f)res.push_back({it,fi});
        }
    }
    cout<<res.size()<<nl;
    for (int i = 0; i < res.size(); ++i) {
        cout<<res[i].fi<<" "<<res[i].se<<nl;
    }
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