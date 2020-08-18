#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    while(n--){
        char o[55] = {0};
        scanf("%s", o);
        
        stack<char> s;
        int err=0;
        for(int i=0; i<strlen(o); i++){
            if(o[i] == '(') s.push(o[i]);
            else{
                if(s.empty()) {err=1; break;}
                else s.pop();
            }
        }
        
        if(err) cout << "NO\n";
        else cout <<((s.size()==0) ? "YES\n" : "NO\n");
    }
}