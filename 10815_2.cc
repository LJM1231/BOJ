#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<int, int> d;
    int n, m, v;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v;
        d[v] = 1;
    }
    
    cin >> m;
    for(int i=0 ; i<m; i++){
        cin >> v;
        cout << d.count(v) << ' ';
    }
    cout << '\n';
}