#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    map<string, int> d;
    int nm = n+m;
    while(nm--){
        string str;
        cin >> str;
        d[str]+=1;
    }
    
    int ans=0;
    for(auto p:d){
        if(p.second==2) ans+=1;
    }
    cout << ans << '\n';
    
    for(auto p:d) {
        if(p.second == 2) cout << p.first << '\n';
    }
}