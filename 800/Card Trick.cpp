    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main(){
        long long int t, n, m;
        cin >> t;
        while(t--){
            cin >> n;
            long long int arr[n];
            for(int i = 0; i < n; i++){
                cin >> arr[i];
            }
            cin >> m;
            long long int brr[m], sum = 0;
            for(int i = 0; i < m; i++){
                cin >> brr[i];
                sum += brr[i];
            }
            cout << arr[sum % n] << endl;
        }
        return 0;
    }