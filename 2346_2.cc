#include <iostream>
#include <list>
using namespace std;

int main() {
    int n;
    list<pair<int,int> > a;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        a.push_back({i,x});
    }
    
    auto it = a.begin();
    while(1){
        cout << it->first << " ";
        if(a.size() == 1) break;
        
        int step = it->second;
        
        if(step >0){
            it = a.erase(it);
            if(it==a.end()) it = a.begin();
            
            while(--step){
                ++it;
                if(it == a.end()) it = a.begin();
            }
        }
        else {
            it = a.erase(it);
            
            while(step++){
                if(it == a.begin()) it = a.end();
                --it;
            }
            if(it == a.end()) --it;
        }
    }
}