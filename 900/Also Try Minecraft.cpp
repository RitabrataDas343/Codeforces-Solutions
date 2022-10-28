#include <bits/stdc++.h>

typedef long long int lli;
typedef long long ll;
typedef long double ld;
typedef int_fast64_t fast64;

#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
    
#define ln(x) x.length()
#define pi 3.1415926535
#define f(i, a, b) for (lli i = a; i < b; i++)
#define rf(i, a, b) for (lli i = a; i >= b; i--)
#define all(x) x.begin(), x.end()

#define Yes cout << "YES" \
                 << "\n";
#define No cout << "NO" \
                << "\n";
#define auto_init(v, x) \
    for (auto &x : v)   \
        cin >> x;
#define auto_display(v, x) \
    for (auto x : v)       \
        cout << x << " ";  \
    cout << endl;
#define auto_displayln(v, x) \
    for (auto x : v)         \
        cout << x << endl;
    
#define vi vector<int>
#define vc vector<char>
#define vbool vector<bool>
#define vll vector<ll>
#define vst vector<string> 
#define pb(x) push_back(x);

#define mpi map<int, int>
#define mpci map<char, int>
#define mpll map<ll, ll>
#define pii pair<int, int>
#define inf INT64_MAX

const lli mod = 1e18;
    
using namespace std;
    
int main(){
    IO
    lli n, m, s, t, dmg, negsum = 0, possum = 0;
    cin >> n >> m;
    int a[n];
    vll vp, vn;
    auto_init(a, x);
    vp.pb(possum);
    vn.pb(negsum);
    f(i, 0, n-1){
        if(a[i+1] > a[i]){
            possum += a[i+1] - a[i];
        } else {
            negsum += a[i] - a[i+1];
        }
        vp.pb(possum);
        vn.pb(negsum);
    }
    while(m--){
        cin >> s >> t;
        if(s <= t){
            dmg = vn[t-1] - vn[s-1]; 
        } else {
            dmg = vp[s-1] - vp[t-1]; 
        }
        cout << dmg << endl;
    }
    return 0;
}
