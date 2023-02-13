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

#define Yes cout << "Yes" \
                 << "\n";
#define No cout << "No" \
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

map<ll,ll> primeFactorization(ll n)
{
    map<ll,ll> m;
    while(n%2==0)
    {
        m[2]++;
        n/=2;
    }
    for(ll i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            m[i]++;
            n/=i;
        }
    }
    if(n>2)
    m[n]++;
    return m;
}
    
int main(){
    IO
    lli t, n;
    cin >> t;
    while(t--){
        cin >> n;
        mpll mp = primeFactorization(n);
        vector<pair<int, int>> v;
        lli ans = 1, sum = 0, res = 0, prevsum;
        for(auto i : mp){
            v.push_back(make_pair(i.second, i.first));
            ans *= i.first;
        }
        sort(v.begin(), v.end());
        for(auto i : v){
            prevsum = sum;
            sum = i.first;
            res += (sum - prevsum) * ans;
            ans /= i.second;
        }
        cout << res << endl;
    }
    return 0;
}
