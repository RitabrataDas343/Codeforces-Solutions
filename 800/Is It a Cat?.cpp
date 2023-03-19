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
    lli n, t;
    cin >> t;
    string s;
    while(t--){
        cin >> n;
        cin >> s;
        cin.ignore(1, '\n');
        bool flag = true;
        int lp = 0;
        f(i,0,n){
            if(s[i] >= 65 and s[i] <= 90){
                s[i] += 32;
            }
            if(s[i] != 'm' and s[i] != 'e' and s[i] != 'o' and s[i] != 'w'){
                flag = false;
                break;
            }
        }
        string cat = "meow", m = "";
        if(flag){
            f(i, 0, n){
                if(m.empty() or m[m.length()-1] != s[i]){
                    m+=s[i];
                }
            }
        }
        if(cat == m){
            Yes
        } else {
            No
        }
    }
    return 0;
}
