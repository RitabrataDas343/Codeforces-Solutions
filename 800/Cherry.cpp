#include <bits/stdc++.h>
#define ll long long
using namespace std;
     
int main (){
    ll t, n, i, prod, maxproduct;
    cin >> t;
    while (t--){
        cin >> n;
        ll array[n];
        for (i = 0; i < n; i++){
            cin >> array[i];
        }
        maxproduct = array[0] * array[1];
        for (i = 1; i < n-1; i++){
            prod = array[i] * array[i+1];
            if (prod > maxproduct){
                maxproduct = prod;
            }
        }
        cout << maxproduct << endl;
    }
    return 0;
}