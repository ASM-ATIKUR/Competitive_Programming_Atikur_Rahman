/***
 **   A S M Atikur Rahman
 **   Update: 17-12-2019
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
#include<utility>
#include<iterator>
#include<algorithm>
#include<cassert>
#include<iomanip> ///setprecision


#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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


ll ara[200100];

int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    ll t, n, mx, mn, i,m;
    scll(t);
    while(t--)
    {
        scll(n);
        For(0,n) scll(ara[i]);
        mx=-1;
        mn=2000000000;
        m=-1;
        ll cnt=0;
        For(0,n-1)
        {
            if(ara[i]==-1)
            {
                if(ara[i+1]!=-1)
                {
                    mn=min(mn,ara[i+1]);
                    mx=max(mx, ara[i+1]);
                }
            }
            else if(ara[i+1]!=-1)
            {
                m=max(abs(ara[i]-ara[i+1]),m);
            }
            else
            {
                mn=min(mn,ara[i]);
                mx=max(mx, ara[i]);
            }
        }
        ll ans;
        //printf("%lld ... %lld...\n", mn, mx);
        if(mx==-1)
        {
            m=ans=0;
        }
        else
        {
            ans=(mx+mn)/2;
            m=max(mx-ans, max(ans-mn, m));
        }
        pfll(m),ps,pfll(ans);pn;


    }





    return 0;
}























