#include <bits/stdc++.h>
using namespace std;
     
int main(){
    long long int t, n, m, i, j;
    cin >> t;
    while(t--){
        cin >> n >> m;
        long long int sum = (m * (m - 1)/ 2) + (n * m * (n+1) / 2);
        cout << sum << endl;
        }
    return 0;
}