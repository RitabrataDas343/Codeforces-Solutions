    #include <bits/stdc++.h>
     
    using namespace std;
     
     
    int main(){
    	int t, n;
    	string S;
    	cin >> t; 
    	while(t--){
    		cin >> n;
    		cin >> S;
    		long long int sum = 0;
    		for(int i = 0; i < n; i++){
    			if((S[i] - '0' > 0) && (i != n-1)){
    				sum += S[i] - '0' + 1;
    			}
    			if(i == n - 1){
    				sum += S[i] - '0';
    			}
    		}
    		cout << sum << "\n";
    	}
    	return 0;
    }