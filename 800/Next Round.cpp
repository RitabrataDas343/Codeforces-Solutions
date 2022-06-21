    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
    	long long int n, k;
    	cin >> n >> k;
    	long long int arr[n];
    	for(int i = 0; i < n; i++){
    		cin >> arr[i];
    	}
    	long long int cutoff = arr[k-1], count = 0;
    	for(int i = 0; i < n; i++){
    		if(arr[i] >= cutoff and arr[i] > 0){
    			count++;
    		}
    	}
    	cout << count << endl;
    	return 0;
    }