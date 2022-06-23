#include <bits/stdc++.h>
using namespace std;

bool checkUnequal(int n){
    map<int, int> mp;
    while(n > 0){
        mp[n%10]++;
        n /= 10;
    }
    for(auto i : mp){
        if(i.second > 1){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    bool flag = true;
    while(flag){
        n++;
        if(checkUnequal(n)){
            flag = false;
            break;
        }
    }
    cout << n << endl;
}