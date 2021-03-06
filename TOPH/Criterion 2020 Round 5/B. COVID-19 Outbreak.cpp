/***
 **   A S M Atikur Rahman
 **   Update: 26-03-2020
***/

//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<time.h>
#include<limits.h>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<bitset>
#include<utility>
#include<iterator>
#include<algorithm>
#include<cassert>
#include<iomanip> ///setprecision


#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define sci(x) scanf("%d%*c", &(x))
#define scll(x) scanf("%lld%*c", &(x))
#define scd(x) scanf("%lf%*c", &(x))
#define scstr(x) scanf("%s", x)
#define pfi(x) printf("%d", (x))
#define pfll(x) printf("%lld", (x))
#define pfd(x) printf("%f", (x))
#define pfstr(x) printf("%s", (x))
#define ps printf(" ")
#define pn printf("\n")
#define pfdot printf("..")

#define For(a,n) for(int i=(a); i<(n); i++)
#define rFor(n,a) for(int i=n-1; i>=0; i--)
#define trav(a,x) for (auto& a : x)
#define Mset(ara, val) memset(ara, val, sizeof(ara))

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound

#define pi  (2*acos(0))


using namespace std;

using ll=long long;
using pii= pair<int,int>;
using pll= pair<long long, long long>;
using pcc= pair<char, char>;
using pdd= pair<double, double>;

#define V(a) vector<a>
using vi= vector<int>;
using vs= vector<string>;
using vll= vector<ll>;
using vpii= vector<pii>;
using vc= vector<char>;
using vd= vector<double>;

//ll POW(ll a,ll b){if(b==0)return 1;ll x=POW(a,b/2);x=(x*x);if(b&1)x=(x*a);return x;}
//ll Sqrt(ll a) { ll x=(ll)sqrt(a); if((x+1)*(x+1)==a) x++; return x; }

ll n,z,trc[1001000];
vector<ll> vv[1000100],cost[1000100];
bool vis[1000100] {0};
ll dfs(ll n)
{
    //printf("%lld..\n", n);
    if(vis[n]) return 0ll;
    vis[n]=true;
    ll ret=trc[n], i;
    //if(vv[n].size()==1) return ret;
    for(i=0; i<vv[n].size(); i++)
    {
        //printf("%d\n", vv[n].size());
        ret+=min(dfs(vv[n][i]),cost[n][i]);
        //printf("%lld........%lld\n", n,ret);
    }
    //printf("%lld...%lld\n", n,ret);
    return ret;
}


int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    scll(n),scll(z);
    ll i;
    for(i=1; i<n; i++)
    {
        ll u,v,x;
        scll(u),scll(v),scll(x);
        vv[u].pb(v);
        cost[u].pb(x);
        vv[v].pb(u);
        cost[v].pb(x);

    }
    for(i=1; i<=n; i++) scll(trc[i]);
    ll ans=dfs(z);
    pfll(ans),pn;




    return 0;
}






















