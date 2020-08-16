#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    int n, v;
    cin >> n;
    
    while(n--){
        cin >> v;
        s.insert(v);
    }
    for(int x:s) cout << x<< ' ';
}