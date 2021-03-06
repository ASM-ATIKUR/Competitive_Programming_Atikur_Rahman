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




int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    ll n, ara[100100], a,i,j,df;
    vector<ll>ans;

    scll(n);
    For(i,0,n)scll(ara[i]);
    sort(ara, ara+n);

    if(n==1)
    {
        pfi(-1),pn;
    }
    else if(n==2)
    {
        df=ara[1]-ara[0];
        if(df%2==0 && df!=0)
        {
            printf("%lld\n%lld %lld %lld\n", 3ll, ara[0]-df, ara[0]+df/2, ara[1]+df);
        }
        else if(df==0) printf("%lld\n%lld\n", 1ll, ara[0]);
        else printf("%lld\n%lld %lld\n", 2ll, ara[0]-df, ara[1]+df);

    }
    else
    {
        df=INT_MAX;
        For(i,1,n)
        {
            df=min(ara[i]-ara[i-1],df);
        }
        int cnt=0;
        for(i=0; i<n-1; i++)
        {
            if(ara[i]+df!=ara[i+1])
            {
                if(ara[i]+2*df==ara[i+1])
                {
                    cnt++;
                    ans.pb(ara[i]+df);
                }
                else
                {
                    cnt=2;
                    break;
                }
            }
        }
        //pfi(cnt),pfdot,pn;
        if(cnt>1)
        {
            pfi(0),pn;
        }
        else if(cnt==1)
        {
            pfi(1),pn,pfi(ans[0]),pn;
        }
        else
        {
            if(df==0) printf("%lld\n%lld\n", 1ll, ara[0]);
            else
            {
                pfi(2),pn;
                printf("%lld %lld\n", ara[0]-df, ara[n-1]+df);
            }
        }
    }





    return 0;
}





















