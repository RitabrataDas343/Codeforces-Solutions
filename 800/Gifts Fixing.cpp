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
    lli t, n, count;
    cin >> t;
    while(t--){
        cin >> n;
        lli a[n], b[n], min_a = INT_MAX, min_b = INT_MAX;        
        f(i, 0, n){
            cin >> a[i];
            min_a = min(min_a, a[i]);
        }
        f(i, 0, n){
            cin >> b[i];
            min_b = min(min_b, b[i]);
        }
        count = 0;
        f(i, 0, n){
            if(a[i] == min_a or b[i] == min_b){
                count += a[i] - min_a + b[i] - min_b;
            } else {
                count += max(a[i] - min_a, b[i] - min_b);
            }
        }
        cout << count << endl;
    }
    return 0;
}
