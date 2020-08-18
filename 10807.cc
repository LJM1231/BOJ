#include <iostream>
using namespace std;

int main(){
    int n, v;
    cin >> n;
    
    int a[101];
    int cnt=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> v;
    
    while(n--){
        if(a[n]==v) cnt++;
    }
    
    cout << cnt << endl;
}