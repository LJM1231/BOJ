#include <iostream>

using namespace std;

int check[2000][2000];

int GCD(int a, int b){
    return b? GCD(b, a%b) : a;
}

int main() {
    int s, e;
    cin >> s >> e;
    
    int cnt = 0;
    for(int n=s; n<=e; n++){
        for(int i=1; i<=n; i++){
            int g = GCD(i, n);
            if(check[i/g][n/g]==0){
                cnt++;
                check[i/g][n/g]=1;
            }
        }
    }
    cout << cnt << endl;
}