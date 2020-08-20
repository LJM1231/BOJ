#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<int> v(n,0);
    
    while(m--){
        int a, b, c;
        cin >> a >> b >> c;
        fill(v.begin()+a-1, v.begin()+b, c);
    }
    
    /*for(int i=0; i<n; i++){
        cout << v[i] << ' ';
    }*/
    for(auto x:v){
        cout << x << ' ';
    }
}