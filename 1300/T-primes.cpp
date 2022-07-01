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

const int MAX = 1000001;
bool prime[MAX];
void sieve(){
    int i, j;
    prime[0] = prime[1] = true;
    for (i = 4; i < MAX; i += 2){
        prime[i] = true;
    }
    for (i = 3; i*i <= MAX; i += 2){
        if (!prime[i]){
            for (j = i*i; j < MAX; j += 2*i){
                prime[j] = true;
            }
        }
    }       
}
    
int main(){
    IO
    sieve();
    lli t, n, r;
    cin >> t;
    while(t--){
        cin >> n;
        r = sqrt(n);
        if (!prime[r] and r*r == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
