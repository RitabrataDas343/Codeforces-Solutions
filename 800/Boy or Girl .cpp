#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> mp;
    for(char m : s){
        mp[m]++;
    }
    if(mp.size() % 2){
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}