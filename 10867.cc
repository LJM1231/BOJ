#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a;
    int m;
    for(int i=0; i<n; i++){
        cin >> m;
        
        a.push_back(m);
    }
    sort(a.begin(), a.end());
    auto last = unique(a.begin(), a.end());
    a.erase(last, a.end());
    
    for(int x : a) cout << x << ' ';
}