/***
 **   A S M Atikur Rahman
 **   Updated: 31-03-2021
***/

//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<cctype>
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
#define Filein(N) freopen("N", "r", stdin);
#define Fileout(N) freopen("N", "w", stdout);
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
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
#define pfiara(namezeze,szszs,nznzn) for(int azaza=szszs; azaza<nznzn; azaza++){ printf("%d ", namezeze[azaza]); }pn;
#define pfllara(namezeze,szszs,nznzn) for(int azaza=szszs; azaza<nznzn; azaza++){ printf("%lld ", namezeze[azaza]); }pn;

#define All(V) V.begin(), V.end()
#define rAll(V) V.rbegin(), V.rend()

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound

#define Ceil(a,b) (((a)+(b)-1)/(b))
#define Sq(a) ((a)*(a))

#define P(x) cout<<"Check X: "<<x;
#define P2(x,y) cout<<"Check X,Y: "<<x<<" "<<y;
#define P3(x,y,z) cout<<"Check X,Y,Z: "<<x<<" "<<y<<" "<<z;

using namespace std;

using ll =long long;
using pii = pair<int,int>;
using pll = pair<long long, long long>;
using pcc = pair<char, char>;
using pdd = pair<double, double>;

#define V(a) vector<a>
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vc = vector<char>;
using vd = vector<double>;


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
//template <typename T> inline T Set(T &n, T p){T on=1;return n= n|(on<<p);}
//template <typename T> inline T Reset(T &n, T p){T on=1;return n= n&(~(on<<p));}
//template <typename T> inline bool Check(T n, T p){T on=1;return (bool) (n&(on<<p));}
//template <typename T> inline T Toggle(T &n, T p){T on=1;return n= n^(on<<p);}

/*----------------------------------------------------------*/

/*------------------------Graph_Moves-------------------------*/

//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};

/*------------------------------------------------------------*/

/*------------------------Declarations------------------------*/

//priority_queue<int,vector<int>, greater<int>>  //priority queue sorted in increasing order

/*------------------------------------------------------------*/

template <typename T> T POW(T a, T b){ T x=1;while(b){ if(b&1)x*=a;a*=a;b>>=1; }return x; }
template <typename T> T mPOW(T a, T b, T M){ T x=1;while(b){ if(b&1) x=(x*a)%M;a=(a*a)%M;b>>=1; }return x; }
template <typename T> T Sqrt(T a) { T x=(T)sqrt(a); if((x+1)*(x+1)==a) x++; return x; }



/*------------------------------------------------------------*/

#define INF 1000000111
#define LINF 4000000000000000444
#define PI  (2*acos(0.0))

#define Mod 1000000007  // 1e9+7
#define MX 2000456


bool cmp (pair<pii,int> a, pair<pii,int> b)
{
    if(a.ss>b.ss) return true;
    return false;
}



int main( int argc, char *argv[] )
{
    int n;
    int ara[1000];
    cin>>n;
    for(int i=0; i<n; i++) cin>>ara[i];
    vector<pair<pii,int> > lst;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            lst.pb({{i+1,j+1},abs(ara[i]-ara[j])});
        }
    }
    sort(All(lst),cmp);
    int fg=0;
    for(int i=0; i<lst.size(); i++)
    {
        cout<<"? "<<lst[i].ff.ff<<" "<<lst[i].ff.ss<<"\n";
        fflush(stdout);
        string s;
        cin>>s;
        if(s=="Yes")
        {
            cout<<"? "<<lst[i].ff.ss<<" "<<lst[i].ff.ff<<"\n";
            fflush(stdout);
            cin>>s;
            if(s=="Yes")
            {
                fg=1;
                cout<<"! "<<lst[i].ff.ff<<" "<<lst[i].ff.ss<<"\n";
                return 0;
            }
        }
    }
    if(!fg){
        puts("! 0 0");
    }











    return 0;
}
















