#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    while(1){
        string s;
        cin >> s;
        int len = s.size();
        int res=0;
        
        if(s=="0") break;
        for(int i=0; i<len; i++){
            if(s[i]!=s[len-i-1]){
                res=1;
            }
        }
        if(res==1) cout << "no\n";
        else cout << "yes\n";
    }
}