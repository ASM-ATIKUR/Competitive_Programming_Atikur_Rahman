/***
 **   A S M Atikur Rahman
 **   Update: 17-12-2019
***/

//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>
#include<map>
#include<math.h>
#include<limits.h>
#include<algorithm>
#include<string>
#include<utility>
#include<stack>
#include<cstring>
#include<iterator>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<iomanip> ///setprecision


#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
#define Mset0(ara, val) memset(ara, val, sizeof(ara))

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

ll n, ara[500100],cnta[500100],cntb[500100],x=0,y=0,i,sum=0,ans;


int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);


    scll(n);
    for(i=0; i<n; i++)
    {
        scll(ara[i]);
        sum+=ara[i];
    }
    if(sum==0)
    {
        ll s=0;
        for(i=0; i<n; i++)
        {
            if(s==0)
                x++;
            s+=ara[i];
        }
        x=x-2;
        ans=(x*(x+1))/2;

    }
    else if(sum%3==0)
    {
        sum/=3;
        ll s=0, a=0,b=0;
        for(i=0; i<n; i++)
        {
            if(s==sum)
            {
                a++;
            }
            else if(s==sum*2)
            {
                b++;
            }
            s+=ara[i];
        }
        s=0;
        //cout<<a<<" "<<b<<endl;
        for(i=0; i<n-1; i++)
        {
            if(s==sum)
            {
                x++;
                ans+=(b);
            }
            else if(s==sum*2)
            {
                b--;
            }
            s+=ara[i];
        }
        //cout<<ans<<endl;
    }
    else ans=0;
    pfll(ans);pn;

    return 0;
}

























