    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
    	long long int t, n, m;
    	cin >> t;
    	while(t--){
    		cin >> n >> m;
    		long long int arr[n], sum = 0;
    		for(int i = 0; i < n; i++){
    			cin >> arr[i];
    			sum += arr[i];
    		}
    		if (sum - m < 0){
    			cout << 0 << endl;
    		} else {
    			cout << sum - m << endl;
    		}
    	}
    	return 0;
    }