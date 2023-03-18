#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

typedef long long int lli;
typedef long long ll;
typedef long double ld;
typedef int_fast64_t fast64;
typedef uint64_t ut;

#define Sharmistha              ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
#define ln(x)                   x.length()
#define all(x)                  x.begin(), x.end()
#define sz(x)                   x.size()
#define pb(x)                   push_back(x);
#define eb(x)                   emplace_back(x);
#define setbits(x)              __builtin_popcountll(x)
#define pbb                     pop_back();
#define grev                    greater<int>()
#define B                       break
#define C                       continue
#define endl                    "\n"
#define f(i, a, b)              for (lli i = a; i < b; i++)
#define rf(i, a, b)             for (lli i = a; i >= b; i--)

#define YY                      cout << "YES" << "\n";
#define NN                      cout << "NO" << "\n";
#define yy                      cout << "Yes" << "\n";
#define nn                      cout << "No" << "\n";

#define auto_init(v, x)         for (auto &x : v) cin >> x;
#define auto_display(v, x)      for (auto x : v) cout << x << " "; cout << endl;
#define auto_displayln(v, x)    for (auto x : v) cout << x << endl;
#define inputint(v,n)           int n; cin>>n; vector<int> v(n); for(int i=0;i<n;i++) cin>>v[i];
#define inputll(v,n)            int n; cin>>n; vector<long long> v(n); for(int i=0;i<n;i++) cin>>v[i];
#define inputld(v,n)            int n; cin>>n; vector<long double> v(n); for(int i=0;i<n;i++) cin>>v[i];
    
#define vi                      vector<int>
#define vc                      vector<char>
#define vbool                   vector<bool>
#define vll                     vector<ll>
#define vlli                    vector<lli>
#define vld                     vector<ld>
#define vst                     vector<string> 
#define vpii                    vector<pair<int,int>>
#define vpll                    vector<pair<ll,ll>>
#define mpi                     map<int, int>
#define mpci                    map<char, int>
#define mpsi                    map<string, int>
#define mpll                    map<ll, ll>
#define pii                     pair<int, int>
#define si                      set<int>
#define dqi                     deque<int>
#define sti                     stack<int>
#define stc                     stack<char>
#define ff                      first
#define ss                      second
#define ci                      cin.ignore(1, '\n');
#define prq                     priority_queue
#define pqi                     prq<int,vector<int>>
#define pqll                    prq<ll,vector<ll>>
#define pqmi                    prq<int,vector<int>,greater<int>>
#define pqmll                   prq<ll,vector<ll>,greater<ll>>
#define mem(v,a)                memset(v,a,sizeof(v))

#define inf INT64_MAX
#define ismin INT_MIN
#define ismax INT_MAX
const lli bigmod = 1e18;
const lli mod = 1000000007;
const ld eps = 1e-9;
const ld pi = 3.141592653589793238462;
const int dx[4]{1,0,-1,0}, dy[4]{0,1,0,-1};

using namespace std;
using namespace __gnu_pbds;

ll extended_gcd(int a, int b, int &x, int &y) { if (b==0) { x=1; y=0; return a; } int x1,y1; int g=extended_gcd(b,a%b,x1,y1); x=y1; y=x1-y1*(a/b); return g; }
ll binexp(ll a, ll b, ll m=mod) { a = a % m; int res = 1; while (b) { if (b&1) { res=(res * a) % m; } a=(a * a) % m; b>>=1; } return res; }
ll gcd(ll a, ll b) { while (b){a %= b; swap(a,b);} return a; }
ll lcm(ll a, ll b) { ll g=__gcd(a,b); ll res=a*(b/g); return res; }
ll sqrtll(ll n) { ll lo=0,hi=3037000499; while (hi-lo>1) { ll m=(hi+lo)/2; if (m*m<=n) { lo=m; } else { hi=m-1; }} if (hi*hi<=n) { return hi; } return lo; }
ld sqrtld(ll n) { ld lo=0,hi=3037000499; while (hi-lo>eps) { ld m=(hi+lo)/2; if ((n-m*m)>eps) { lo=m; } else { hi=m-eps; }} return lo; }
ll cbrtll(ll n) { ll lo=0,hi=2097151; while (hi-lo>1) { ll m=(hi+lo)/2; if (m*m*m<=n) { lo=m; } else { hi=m-1; }} if (hi*hi*hi<=n) { return hi; } return lo; }
ld cbrtld(ll n) { ld lo=0,hi=2097151; while (hi-lo>eps) { ld m=(hi+lo)/2; if ((n-m*m*m)>eps) { lo=m; } else { hi=m-eps; }} return lo; }
ll getbit(ll n,ll pos){return ((n&(1ll<<pos))!=0ll);}

int mod_inv(int a, ll m=mod) { a = a % m; return binexp(a,m-2,m); }
int mod_add(int a, int b, ll m=mod) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
int mod_sub(int a, int b, ll m=mod) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
int mod_mul(int a, int b, ll m=mod) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
int mod_div(int a, int b, ll m=mod) { a = a % m; int binv = mod_inv(b,m); return (((a * binv) % m) + m) % m; }

template<typename T> bool chkmin(T &a, T b){return (b < a) ? a = b, 1 : 0;}
template<typename T> bool chkmax(T &a, T b){return (b > a) ? a = b, 1 : 0;}
template<class T> using oset=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

void solve(){
    // Write your code here
}
    
int32_t main(){
    Sharmistha
    lli t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}