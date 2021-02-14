/***
 **   A S M Atikur Rahman
 **   Update: 17-04-2020
***/

//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<time.h>
#include<climits>
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


#define fastIO ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define sci(x) scanf("%d%*c", &(x))
#define sci2(x,y) scanf("%d%*c%d%*c", &(x), &(y))
#define sci3(x,y,z) scanf("%d%*c%d%*c%d%*c", &(x), &(y), &(z))
#define scll(x) scanf("%lld%*c", &(x))
#define scll2(x,y) scanf("%lld%*c%lld%*c", &(x), &(y))
#define scll3(x,y,z) scanf("%lld%*c%lld%*c%lld%*c", &(x), &(y), &(z))
#define scd(x) scanf("%lf%*c", &(x))
#define scd2(x,y) scanf("%lf%*c%lf%*c", &(x), &(y))
#define scstr(x) scanf("%s", x)
#define pfi(x) printf("%d", (x))
#define pfi2(x,y) printf("%d %d", (x), (y))
#define pfll(x) printf("%lld", (x))
#define pfll2(x,y) printf("%lld %lld", (x), (y))
#define pfd(x) printf("%f", (x))
#define pfstr(x) printf("%s", (x))
#define ps printf(" ")
#define pn printf("\n")
#define pfdot printf("..")

#define For(i,a,n) for(int i=(a); i<=(n); i++)
#define rFor(i,n,a) for(int i=n; i>=a; i--)
#define trav(a,x) for (auto &a : x)
#define Ms(ara, val) memset(ara, val, sizeof(ara))
#define TestCase int testcase, cs=1; sci(testcase);while(testcase--)

#define All(V) V.begin(), V.end()
#define rAll(V) V.rbegin(), V.rend()

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound

#define Ceil(a,b) ((a/b)+((a%b)!=0))
#define Sq(a) ((a)*(a))

#define P(x) cout<<"Check X: "<<x;
#define P2(x,y) cout<<"Check X,Y: "<<x<<" "<<y;
#define P3(x,y,z) cout<<"Check X,Y,Z: "<<x<<" "<<y<<" "<<z;

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

/*------------------------Bitmask--------------------------*/
//INTEGER

#define Toggle(n,i) (n^(1<<i))
#define Check(n,i) (n&(1<<i))
#define Set(n,i) (n|(1<<i))
#define Reset(n,i) (n&(~(1<<i)))

////LONG LONG INTEGER
//#define Toggle(n,i) (n^((1ll)<<i))
//#define Check(n,i) (n&((1ll)<<i))
//#define Set(n,i) (n|((1ll)<<i))
//#define Reset(n,i) (n&(~((1ll)<<i)))

//// Functions for Bitmask
//int Set(int n, int p){return n= n|(1<<p);}
//ll Set(ll n, ll p){return n= n|(1ll<<p);}
//int Reset(int n,int p){return n= n&(~(1<<p));}
//ll Reset(ll n,ll p){return n= n&(~(1ll<<p));}
//bool Check(int n, int p){return (bool) (n&(1<<p));}
//bool Check(ll n, ll p){return (bool) (n&(1ll<<p));}
//int Toggle(int n, int p){return n= n^(1<<p);}
//ll Toggle(ll n, ll p){return n= n^(1ll<<p);}

/*----------------------------------------------------------*/



/*------------------------Declarations------------------------*/

//priority_queue<int,vector<int>, greater<int>>  //priority queue sorted in increasing order

/*------------------------------------------------------------*/


#define pi  (2*acos(0))
#define Mod 1000000007


vector<int> graph[210], cost[210];

struct data
{
    int v,w;
    bool operator < (data p) const
    {
        return w<p.w;
    }
};

int prims(int src, int des, int n)
{
    bool visited[210] {0};
    priority_queue< data > pq;
    int i,u,v, mn=INT_MAX,j,p;
    for(i=0; i<n-1; i++)
    {
        u=src;
        visited[src]=true;
        if(u==des) break;
        for(j=0; j<graph[u].size(); j++)
        {
            v=graph[u][j];
            if(!visited[v])
            {
                data tmp;
                tmp.v=v;tmp.w=cost[u][j];
                pq.push(tmp);
            }
        }
        while(visited[src])
        {
            data tmp=pq.top();
            pq.pop();
            src=tmp.v;
            p=tmp.w;
        }
        mn=min(mn, p);
    }

    return mn;
}


int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    fastIO
    int cs=1;
    while(true)
    {
        int n,e,src,des;
        cin>>n>>e;
        if(n==0) break;

        map<string, int> mp;
        int nextnode=1;
        For(i,0,e-1)
        {
            string uu,vv;
            int w,u,v;
            cin>>uu>>vv>>w;
            if(!mp.count(uu))
            {
                mp[uu]=u=nextnode++;
            }
            else u=mp[uu];
            if(!mp.count(vv))
            {
                mp[vv]=v=nextnode++;
            }
            else v=mp[vv];

            graph[v].pb(u);
            graph[u].pb(v);
            cost[u].pb(w);
            cost[v].pb(w);
        }
        string uu,vv;
        cin>>uu>>vv;
        src=mp[uu];
        des=mp[vv];
        cout<<"Scenario #"<<cs++<<"\n"<<prims(src,des,n)<<" tons\n\n";
        for(int i=1; i<=n; i++)
        {
            graph[i].clear();
            cost[i].clear();
        }
    }


    return 0;
}























