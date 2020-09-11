#include <iostream>

using namespace std;

int main(){
    while(1){
        string s;
        cin >> s;
        
        if(s[0] == '0') break;
        
        int n=s.size(), res=1;
        for(int i=0; i<n/2; i++){
            if(s[i]!=s[n-i-1]){
                res = 0;
                break;
            }
        }
        cout << ((res==1) ? "yes" : "no") << '\n';
    }
}