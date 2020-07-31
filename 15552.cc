#include <iostream>

using namespace std;

int main() {
    int x, y, t;
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> x >> y;
        cout << x+y << '\n';
    }
}