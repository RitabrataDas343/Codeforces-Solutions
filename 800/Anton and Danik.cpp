#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    map<char, int> mp;
    for(char m : s){
        mp[m]++;
    }
    if(mp['A'] > mp['D']){
        cout << "Anton" << endl;
    } else if (mp['A'] < mp['D']){
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}