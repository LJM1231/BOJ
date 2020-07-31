#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string str;
    int M;
    cin >> str;
    cin >> M;
    
    list<char> l(str.begin(), str.end());
    list<char>::iterator it = l.end();
    
    while(M--){
        char input;
        cin >> input;
        
        if(input == 'L'){
            if(it!=l.begin()) it--;
        }
        else if(input == 'D'){
            if(it!=l.end()) it++;
        }
        else if(input == 'B'){
            if(it!= l.begin()){
                l.erase(--it);
                it++;
            }
        }
        else if(input == 'P'){
            char x;
            cin >> x;
            l.insert(it, x);
        }
    }
    
    for(auto x:l) cout << x;
    
    return 0;
}