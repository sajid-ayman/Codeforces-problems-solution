// author : Sajid Ayman
// problem : https://codeforces.com/contest/546/problem/C
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

void sol() {
    int n;cin>>n;
    deque<int>v1,v2;
    int k,k2;cin>>k;
    int cnt=0;
    for (int i = 0; i <k; ++i) {
        int t;cin>>t;
        v1.push_front(t);
    }cin>>k2;
    for (int i = 0; i <k2; ++i) {
        int t;cin>>t;
        v2.push_front(t);
    }
//    for(int i=0;i<v1.size();i++)cout<<v1[i]<<' ';
//    cout<<nl;
//    for(int i=0;i<v2.size();i++)cout<<v2[i]<<' ';
//    cout<<nl;
    int fi=v1.back(),se=v2.back();
    while(!v1.empty()&&!v2.empty()&&cnt<2000){
        int t1=v1.back(),t2=v2.back();
        if(v1.back()>v2.back()){
            v1.pop_back();v2.pop_back();
            v1.push_front(t2);v1.push_front(t1);
        }
        else if(v2.back()>v1.back()){
            v1.pop_back();v2.pop_back();
            v2.push_front(t1);v2.push_front(t2);
        }
        cnt++;
    }
    if(!v1.empty()&&!v2.empty()){cout<<-1;kill}
    cout<<cnt<<' ';
    if(v1.empty())cout<<2;
    else cout<<1;
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