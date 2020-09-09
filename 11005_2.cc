#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    
    string s = "";
    while(n){
        int v = n%b;
        s.insert(s.begin(), (v>=10) ? 'A' + (v-10) : '0'+v);
        n/=b;
    }
    cout << s;
}