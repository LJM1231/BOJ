#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    int len = s.length();
    vector<string> v;
    
    for(int i=0; i<len; i++){
        v.push_back(s);
        s.erase(s.begin());
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<len; i++){
        cout << v[i] << '\n';
    }
}