/***
 **   A S M Atikur Rahman
 **   Update: 27-11-2019
***/

#include <bits/stdc++.h>


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

#define mp make_pair
#define pb push_back
#define f first
#define s second
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


int key[30];

int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    ll n, k, i, j, ans=0, cnt=0;
    string str,ke;

    scll(n);
    scll(k);
    getline(cin,str);
    getline(cin,ke);
    for(i=0; i<29; i++) key[i]=0;
    for(i=0; i<k; i++)
    {
        key[ke[i*2]-'a']=1;
    }
    for(i=0; i<n; i++)
    {
        if(key[str[i]-'a'])
        {
            cnt++;
        }
        else
        {
            //printf("%lld..\n", cnt);
            ans+=(cnt*(cnt+1))/2;
            cnt=0;
        }
    }
    ans+=(cnt*(cnt+1))/2;
    pfll(ans);pn;


    return 0;
}

























