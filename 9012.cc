#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--){
        stack<char> head;
        
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                head.push(s[i]);
            }
            else if(s[i] == ')'){
                if(!head.empty()){
                    if(head.top()=='('){
                        head.pop();
                    }
                }
                else{
                    head.push(s[i]);
                }
            }
        }
        if(!head.empty()) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}