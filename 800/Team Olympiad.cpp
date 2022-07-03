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
    int t;
    cin >> t;
    int a[t];
    vi v_one, v_two, v_three;
    f(i, 0, t){
        cin >> a[i];
        switch(a[i]){
            case 1:
                v_one.pb(i+1);
                break;
            case 2:
                v_two.pb(i+1);
                break;
            case 3:
                v_three.pb(i+1);
                break;
        }
    }
    auto m1 = min(v_one.size(), v_two.size());
    auto sz = min(m1, v_three.size());
    cout << sz << endl;
    if(sz){
        f(i, 0, sz){
            cout << v_one[i] << " " << v_two[i] << " " << v_three[i] << endl;
        }
    }
    return 0;
}
