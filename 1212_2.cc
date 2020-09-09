#include <iostream>
#include <string>

using namespace std;

string eight[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
string head[8] = {"0", "1", "10", "11", "100", "101", "110", "111"};

int main() {
    string s;
    cin >> s;
    
    for(int i=0; i<s.size(); i++){
        int idx = s[i]-'0';
        cout << ((i==0) ? head[idx] : eight[idx]);
    }
    
}