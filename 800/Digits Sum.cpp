#include <bits/stdc++.h>
#define ll long long
using namespace std;
     
int main(){
    ll t, n, num;
    cin >> t;
    while (t--){
        cin >> n;
        num = n / 10;
        if (n % 10 == 9){
            cout << num+1 << endl;
        } else {
            cout << num << endl;
        }
    }
    return 0;
}