#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, check = "hello";
    int pos = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == check[pos]){
            pos++;
        }
    }
    if(pos == check.length()){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}