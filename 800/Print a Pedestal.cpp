    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
    	int t, n;
    	cin >> t;
    	while(t--){
    		cin >> n;
    		vector<int> v(3 , 0);
    		int rem = n % 3;
    		if(n%3 == 0){
    			v[0] = n / 3;
    			v[1] = n / 3 + 1;
    			v[2] = n / 3 - 1;
    		} else if(n % 3 == 1){
    			v[0] = n / 3;
    			v[1] = n / 3 + 2;
    			v[2] = n / 3 - 1;
    		} else if(n % 3 == 2){
    			v[0] = n / 3 + 1;
    			v[1] = n / 3 + 2;
    			v[2] = n / 3 - 1;
    		}
    		for (auto i : v){
    			cout << i << " ";
    		}
    	}
    	return 0;
    }