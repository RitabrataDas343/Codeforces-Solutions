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
    lli t, p, price, diff;
    string s, r, dup;
    vector<ll>::iterator itr;
    cin >> t;
    while(t--){
        cin >> s;
        cin.ignore(1, '\n');
        cin >> p;
        r = "";
        dup = s;
        mpci mp;
        vll v;
        sort(all(dup));
        price = 0;
        for(char m : dup){
            price += m - 'a' + 1;
            v.pb(price);
        }
        diff = price - p;
        if(diff <= 0){
            r = s;
        } else {
            itr = upper_bound(all(v), p);
            for(int i = 0; i < itr - v.begin(); i++){
                mp[dup[i]]++;
            }
            f(i, 0, ln(s)){
                if(mp[s[i]] != 0){
                    r += s[i];
                    mp[s[i]]--;
                }
            }
        }
        cout << r << endl;
    }
    return 0;
}
