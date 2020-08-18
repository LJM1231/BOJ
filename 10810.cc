#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[101];
    
    memset(arr, 0, sizeof(arr));
    
    while(m--){
        int a, b, c;
        cin >> a >> b >> c;
        
        for(int i=a; i<=b; i++){
            arr[i]=c;
        }
    }
    for(int i=1; i<=n; ++i){
        cout << arr[i] << " ";
    }
}