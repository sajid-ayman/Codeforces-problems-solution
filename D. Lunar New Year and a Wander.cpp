// author : Sajid Ayman
// problem : https://codeforces.com/contest/1106/problem/D
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
const int N = 2e5+5, Mod = 1e9+7;
void sol(){
    int n,m; cin>>n>>m;
    vector<bool>vis(n+1);
    set<int>st;
    vector<vector<int>>v(n+1);
    for (int i = 0; i < m; ++i) {
        int x,y;cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    st.insert(1);
    vis[1]=true;
    while(!st.empty()){
        int ind = *st.begin();
        cout << ind << " ";
        st.erase(st.begin());
        for(int i = 0; i < v[ind].size(); i++){
            if(!vis[v[ind][i]]){
                vis[v[ind][i]] = true;
                 st.insert(v[ind][i]);
            }
        }
    }
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
10 10
1 4
6 8
2 5
3 7
9 4
5 6
3 4
8 10
8 9
1 10
*/