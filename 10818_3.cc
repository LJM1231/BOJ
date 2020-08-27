#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    auto p = minmax_element(a.begin(), a.end());
    
    cout << *p.first << ' ';
    cout << *p.second << '\n';
    
    return 0;
}