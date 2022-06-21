#include <bits/stdc++.h>
using namespace std;
     
string Sort(string str){
    sort(str.begin(), str.end());
    return str;
}
     
int main (){
    int t, n, count = 0;
    cin >> t;
    while(t--){
        cin >> n;
        char s[n+1];
        fgets(s, n, stdin);
        cin >> s;
        string s_sort = Sort(s);
        for (int i = 0; i < n; i++){
            if(s[i] == s_sort[i]){
                count++;
            }
        }
        cout << n - count << endl;
        count = 0;
    }
}