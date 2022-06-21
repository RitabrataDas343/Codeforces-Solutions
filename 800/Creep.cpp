#include <bits/stdc++.h>
using namespace std;
     
int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int score = abs(k - n), s = 0;
        string str = "";
        char maj = (n >= k) ? '0':'1';
        char min = (maj == '1')? '0': '1';
        for(int i = 0; i < (k + n); i++){
            if(s < score){
                str += maj;
                s++;
            } else {
                str += min;
                s--;
            }
        }
        cout << str << endl;
    }
    return 0;
}