#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;

int main() {
    bitset<100000> A, B;
    
    cin >> A;
    cin >> B;
    
    cout << (A&B) << '\n';
    cout << (A|B) << '\n';
    cout << (A^B) << '\n';
    A.flip();
    B.flip();
    cout << (A) << '\n';
    cout << (B) << '\n';
}