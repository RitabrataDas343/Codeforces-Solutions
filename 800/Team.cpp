    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
    	int t, a, b, c;
    	cin >> t;
    	int count = 0;
    	while(t--){
    		cin >> a >> b >> c;
    		if(a + b + c >= 2){
    			count++;
    		}
    	}
    	cout << count << "\n";
    	return 0;
    }