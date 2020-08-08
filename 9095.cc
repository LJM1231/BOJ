#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int T;
    int n;
    int DP[11];
    
    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 4;
    
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> n;
        for(int j=4; j<=n; j++){
            DP[j] = DP[j-1] + DP[j-2] + DP[j-3];
        }
        cout << DP[n] << '\n';
    }
}