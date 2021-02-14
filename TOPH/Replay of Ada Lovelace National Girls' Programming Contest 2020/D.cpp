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

#define For(i,a,n) for(int i=(a); i<(n); i++)
#define rFor(i,n,a) for(int i=n-1; i>=0; i--)
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

ll height[200100], gold[200100], r[200100], l[200100], rs[200100],ls[200100];

int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    ll n, i, j, q, x;
    scll(n);
    for(i=0;i<n;i++)
    {
        scll(height[i]);
        scll(gold[i]);
        if(i>0) gold[i]+=gold[i-1];
    }

    for(i=1;i<n;i++)
    {
        if(height[i-1]==height[i])
        {
            ls[i]=ls[i-1]+1;
        }
        if(height[i-1]<=height[i])
        {
            l[i]=l[i-1]+1;
        }
    }
    for(i=n-2;i>=0;i--)
    {
        if(height[i+1]==height[i])
        {
            rs[i]=rs[i+1]+1;
        }
        if(height[i+1]<=height[i])
        {
            r[i]=r[i+1]+1;
        }
    }

    scll(q);
    while(q--)
    {
        scll(x);
        x--;
        ll ans=0;
        ll left, right;
        left=x-ls[x]-1;
        right=x+r[x];
        if(left<0) ans=max(ans, gold[right]);
        else ans=max(ans, gold[right]-gold[left]);
        left=x-l[x]-1;
        right=x+rs[x];
        if(left<0) ans=max(ans, gold[right]);
        else ans=max(ans, gold[right]-gold[left]);
        pfll(ans),pn;
    }




















    return 0;
}
