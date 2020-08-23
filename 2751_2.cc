#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    
    while(n--){
        cin >> v[n];
    }
    
    sort(v.begin(), v.end());
    
    for(auto x:v) cout << x <<'\n';
}