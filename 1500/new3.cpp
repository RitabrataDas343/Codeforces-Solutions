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
    lli t, n, m, a, d, b;
    vector<int>::iterator ind1, ind2;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vi v;
        map<int, vector<int>> mp;
        f(i, 0, n){
            cin >> a;
            v.pb(a);
            mp[a].pb(i);
        }
        while(m--){
            cin >> d >> b;
            if(mp[d].size() != 0 and mp[b].size() != 0){
                if(mp[d][0] < mp[b][mp[b].size() - 1]){
                    Yes
                } else {
                    No
                }
            } else {
                No
            }
        }
    }
    return 0;
}
