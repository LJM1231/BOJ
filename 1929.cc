#include <iostream>

using namespace std;
int arr[1000000]={0,1};

int main(){
    int m, n;
    cin >> m >> n;
    
    for(int i=2; i<=n; i++){
        for(int j=2; i*j<=n; j++){
            arr[i*j]=1;
        }
    }
    
    for(int i=m; i<=n; i++){
        if(arr[i]==0) cout << i << '\n';
    }
}