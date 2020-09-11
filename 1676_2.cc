#include <iostream>

using namespace std;

int main() {
    int count =0, n;
    cin >> n;
    
    for(int i=n; i>0; i--){
        int v = i;
        while(v%5 == 0) { v/=5; count++;}
    }
    cout << count;
}