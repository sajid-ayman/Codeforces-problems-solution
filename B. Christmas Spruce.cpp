// author : Sajid Ayman
// problem : https://codeforces.com/contest/913/problem/B
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
vector<bool>vis;
vector<vector<int>>v;
void sol() {
    int n;cin>>n;
    vis.resize(n+1,false);
    v.resize(n+1);
    for (int i = 1; i <=n-1; ++i) {
        int t;cin>>t;
        v[t].push_back(i+1);
        v[i+1].push_back(t);
    }
//    for (int i = 1; i <=n; ++i) {
//        cout<<i<<" ->";
//        for (auto j:v[i]) {
//            cout<<j<<' ';
//        }
//        cout<<nl;
//    }
    queue<int>bfs;
    bfs.push(1);
    vis[1]=true;
    while(!bfs.empty()) {
        int i = bfs.front();
        bfs.pop();
        int cnt = 0;
        for (auto it: v[i]) {
            if (!vis[it]) {
                if (v[it].size() == 1)cnt++;
                else bfs.push(it);
                vis[it] = true;
            }
        }
//        cout<<cnt<<nl;
        if (cnt < 3) {
            cout << "No";
            exit(0);
        }

    }
    cout<<"Yes";
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
