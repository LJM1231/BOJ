#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    int n=s.size();
    vector<int> a;
    for(int i=0; i<n; i++) a.push_back(i);
    
    sort(a.begin(), a.end(), [&s](int L, int R) {
        return strcmp(s.c_str() + L, s.c_str()+R) <0;
    });
    
    for(int x:a){
        cout << s.substr(x) << '\n';
    }
}