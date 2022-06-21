    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
    	int m;
    	string s;
    	cin >> m;
    	int count = 0;
    	while(m--){
    		cin >> s;
    		if (s == "++X" or s == "X++"){
    			count++;
    		} else {
    			count--;
    		}
    	}
    	cout << count << endl;
    	return 0;
    }