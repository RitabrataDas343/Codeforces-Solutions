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
#define mpi map<int, int>
#define mpll map<ll, ll>
#define vll vector<ll>
#define vst vector<string>
#define pii pair<int, int>
#define inf INT64_MAX

const lli mod = 1e18;
    
using namespace std;
    
int main(){
    IO
    string s;
    cin >> s;
    vector<char> v;
    f(i, 0, ln(s)){
        if(s[i] >= 65 and s[i] <= 90){
            s[i] += 32;
        }
        if (s[i] != 'a' and s[i] != 'i' and s[i] != 'e' and s[i] != 'o' and s[i] != 'u' and s[i] != 'y'){
            v.push_back(s[i]);
        }
    }
    f(i, 0, v.size()){
        cout << "." << v[i];
    }
    return 0;
}
