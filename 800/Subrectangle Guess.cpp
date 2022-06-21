#include <bits/stdc++.h>
using namespace std;
     
int main(){
    long long int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        long long int arr[a][b], maxc, posx, posy;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cin >> arr[i][j];
                if(i == 0 and j == 0){
                    maxc = arr[i][j];
                    posx = i;
                    posy = j;
                }
                if (maxc < arr[i][j]){
                    maxc = arr[i][j];
                    posx = i;
                    posy = j;
                }
            }
        }
        posx = ((a - posx) > (posx + 1)) ? (a - posx) : (posx+1);
        posy = ((b - posy) > (posy + 1)) ? (b - posy) : (posy+1);
        cout << posx * posy << endl;
    }
    return 0;
}