    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
    	string s, t;
    	int x, y;
    	bool flag = true;
    	cin >> s;
    	cin.ignore(1, '\n');
    	cin >> t;
    	for(int i = 0; i < s.length(); i++){
    		if (s[i] >= 65 and s[i] <= 90){
    			x = s[i] - 'A';
    		} else {
    			x = s[i] - 'a';
    		}
    		if (t[i] >= 65 and t[i] <= 90){
    			y = t[i] - 'A';
    		} else {
    			y = t[i] - 'a';
    		}
    		if (x < y){
    			cout << -1 << endl;
    			flag = false;
    			break;
    		} 
    		if (y < x){
    			cout << 1 << endl;
    			flag = false;
    			break;
    		}
    	} 
    	if (flag) cout << 0 << endl;
    	return 0;
    }