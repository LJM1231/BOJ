#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, string> > v;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        
        v.push_back(pair<int, string>(s.length(), s));
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<n; i++){
        if(i>0){
            if(v[i].second.compare(v[i-1].second) == 0) continue;
        }
        cout << v[i].second << '\n';
    }
}