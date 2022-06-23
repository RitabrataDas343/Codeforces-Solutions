#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count_upp = 0, count_low = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 65 and s[i] <= 90){
            count_upp++;
        } else {
            count_low++;
        }
    }
    if(count_upp > count_low){
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 97 and s[i] <= 122){
                s[i] -= 32;
            }
        }
    } else {
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 65 and s[i] <= 90){
                s[i] += 32;
            } 
        }
    }
    cout << s << endl;
    return 0;
}