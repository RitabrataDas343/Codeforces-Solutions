#include <bits/stdc++.h>

typedef long long int lli;
typedef long long ll;
typedef long double ld;
typedef int_fast64_t fast64;
typedef uint64_t ut;

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
    lli t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n % 2 == 0){
            cout << n/2 << " " << n/2 << endl;
        } else {
            lli r = 0, dig[10];
            while(n > 0){
                dig[r] = n % 10;
                n /= 10;
                r++;
            }
            vll v1(10), v2(10);
            lli rem = 1;
            f(i, 0, r) {
                if(dig[i] % 2) {
                    v1[i]= dig[i] / 2 + rem;
                    v2[i]= dig[i] / 2 + 1-rem;
                    rem = 1 - rem;
                } 
                else{
                    v1[i]= dig[i] / 2;
                    v2[i]= dig[i] / 2;
                } 
            }
            lli a1 = 0, a2 = 0;
            rem = 1;
            f(i, 0, r) {
                a2 += v2[i] * rem;
                a1 += v1[i] * rem;
                rem *= 10;
            }
            cout << a1 << " " << a2 << endl;
        }
    }
    return 0;
}
