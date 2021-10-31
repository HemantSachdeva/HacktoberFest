#include<bits/stdc++.h>
using namespace std;
#define fi              first
#define se              second
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define pll             pair<long long,long long>
#define vi              vector<int>
#define vl              vector<long long>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define mod             1000000007
#define inf             1e18
#define ld              long double
#define w(t)            int t; cin>>t; while(t--)
#define f(i,x)          for(int i=0;i<x;i++)
#define rep(i,a,b)      for(int i=a;i<=b;i++)
#define fast            ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);

int main(){
#ifndef ONLINE_JUDGE
   freopen("inputf.in", "r", stdin); 
   freopen("error.txt", "w", stderr); 
   freopen("outputf.in", "w", stdout); 
#endif
    fast;
    int t; cin>>t; for(int j=1;j<=t;j++){
        string s; cin>>s;
        int f[26]{0};
        for(int i=0;i<s.size();i++){
        	f[s[i]-'A']++;
        }
        // for(int i=0;i<26;i++)
        // 	cout<<f[i]<<" ";
        int sumv=0,sumc=0;
        vector<int> vv,vc;
        for(int i=0;i<26;i++){
        	if(i==0||i==4||i==8||i==14||i==20){ vv.pb(f[i]); sumv+=f[i];}
        	else {vc.pb(f[i]); sumc+=f[i];}
        }
        sort(vv.begin(),vv.end());
        sort(vc.begin(),vc.end());
        ll ansv, ansc;
        ansv=2*(sumv-vv[vv.size()-1])+sumc;
        ansc=2*(sumc-vc[vc.size()-1])+sumv;
        cout<<"Case #"<<j<<": "<<min(ansv,ansc)<<"\n";

  
    }

    return 0;
}