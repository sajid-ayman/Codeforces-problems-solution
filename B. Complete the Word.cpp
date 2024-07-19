// author : Sajid Ayman
// problem : https://codeforces.com/contest/716/problem/B
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
    string s;cin>>s;
    deque<char>d;
    int r,l;
    if (s.length()<26){cout<<-1;kill}
    for (int i = 0; i < s.length()-25; ++i) {
        //string tmp=s.substr(i,i+26);
       // if(i==16)cout<<tmp<<nl;
        int qustion=0;
        set<char>st;
        string tmp="";
        for (int j = i; j <=i+25 ; ++j) {
            tmp+=s[j];
           if(s[j]=='?')qustion++;
           else st.insert(s[j]);
        }
        if(st.size()+qustion==26){
//            for (auto it:st) {
//                cout<<it<<" ";
//            }
//            cout<<nl<<i<<nl;
            vector<bool>vis(26);
            r=i; l=i+25;
            string res="";
            for (int j = 0; j <26; ++j) {
                if(tmp[j]!='?')vis[tmp[j]-'A']=true;
            }
            for (int j = 0; j <tmp.size(); ++j) {
                if(tmp[j]=='?'){
                    for (char k = 'A' ; k <='Z' ; ++k) {
                        if(!vis[k-'A']) {
                            res += k;
                            vis[k - 'A'] = true;
                            break;
                        }
                    }
                }
                else if(vis[tmp[j]-'A'])res+=tmp[j];
            }
            for (int j = 0; j < r; ++j) {
                if(s[j]=='?')cout<<'A';
                else cout<<s[j];
            }
            cout<<res;
            for (int j = l+1; j <s.length(); ++j) {
                if(s[j]=='?')cout<<'A';
                else cout<<s[j];
            }
//            cout<<l<<" "<<r;
            exit(0);
        }
    }
    cout<<-1;
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
ABABABBAB????????????ABABABABA???????????ABABABABA?????????KLCSJB?????????Z
*/
