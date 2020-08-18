#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[101];
    
    for(int i=1; i<=n; i++){
        arr[i] = i;
    }
    
    while(m--){
        int a, b, c;
        cin >> a >> b >> c;
        rotate(&arr[a], &arr[c], &arr[b+1]);
    }
    for(int i=1; i<=n; i++){
        cout << arr[i] << ' ';
    }
    
    
}