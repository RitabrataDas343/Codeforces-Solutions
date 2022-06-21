    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main(){
    	int t, n;
    	cin >> t; 
    	while(t--){
    		cin >> n;
    		long long int j;
    		vector <int> v(2, 0);
    		for(int i = 0; i < n; i++){
    			cin >> j;
    			if(j % 2 == 0){
    				v[0]++; 
    			} else {
    				v[1]++;
    			}
    		}
    		if(v[1] > v[0]){
    			cout << v[0] << "\n";
    		} else {
    			cout << v[1] << "\n";
    		}
    	}
    	return 0;
    }