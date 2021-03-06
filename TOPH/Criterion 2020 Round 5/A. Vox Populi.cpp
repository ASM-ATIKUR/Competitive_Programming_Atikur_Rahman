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



int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    ll n, x, y, xx, yy,i,j;
    map<pll,ll> mp;
    map<pll, ll> :: iterator it;
    vector<pll> ans;

    scll(n);
    for(i=0; i<n; i++)
    {
        scll(x),scll(y);
        xx=x-(x%10), yy= y-(y%10);
        x=x%10;y=y%10;

        if(x==0 && y==0)
        {
            //if(xx>0)
            {
                mp[{xx-10,yy}]++;
            }
            //if(yy>0)
                mp[{xx,yy-10}]++;
            mp[{xx+10,yy}]++;
            mp[{xx,yy+10}]++;
            mp[{xx,yy}]++;
        }
        else
        {
//            printf("%lld %lld....\n", x+y, y);
            if(x+y<=10) mp[{xx,yy}]++;
            xx+=10;
            x=10-x;
//            printf("%lld %lld....\n", x+y, y);
            if(x+y<=10) mp[{xx,yy}]++;
            x=10-x;
            y=10-y;
            xx-=10;
            yy+=10;
//            printf("%lld %lld....\n", x+y, y);
            if(x+y<=10) mp[{xx,yy}]++;
            x=10-x;
            xx+=10;
//            printf("%lld %lld....\n", x+y, y);
            if(x+y<=10) mp[{xx,yy}]++;
        }

    }
//    printf("%d......\n" , mp.size());
    it=mp.begin();
    ll lst=it->ss;
    ans.pb(it->ff);
    it++;
    for(; it!=mp.end(); it++)
    {
//        printf("%d %d..\n", it->ff.ff, it->ff.ss);
        if(it->ss==lst)
        {
            ans.pb(it->ff);
        }
        else if(it->ss>lst)
        {
            lst=it->ss;
            ans.clear();
            ans.pb(it->ff);
        }
    }
    sort(ans.begin(),ans.end());
    for(i=0; i<ans.size(); i++)
    {
        printf("%lld %lld\n", ans[i].ff, ans[i].ss);
    }




    return 0;
}






















