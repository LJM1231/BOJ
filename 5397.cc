#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;
    cin >> N;
    while(N--){
        string L;
        cin >> L;
        
        list<char> l;
        list<char>::iterator it = l.begin();
        int L_len = L.size();
        int L_index=0;
        
        for(int i=0; i<L_len; i++){
            switch(L[L_index]){
                case '<':
                    if(it != l.begin()) it--;
                    break;
                case '>':
                    if(it != l.end()) it++;
                    break;
                case '-':
                    if(it!=l.begin()) l.erase(--it);
                    it++;
                    break;
                default:
                    l.insert(it, L[L_index]);
                    break;
            }
            L_index++;
        }
        for(auto x:l) cout << x;
        cout << '\n';
        /*for(auto x : l) printf("%c", x);
        printf("\n");*/
    }
    return 0;
}