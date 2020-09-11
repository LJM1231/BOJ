#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    n+=m;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());
    
    for(auto x:v) cout << x << ' ';
}
