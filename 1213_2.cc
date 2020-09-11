#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    
    char center=0;
    stack<char> l, r;
    for(int i=0; i<s.size(); ){
        if(s[i]==s[i+1]){
            l.push(s[i]);
            r.push(s[i+1]);
            i+=2;
        }
        else{
            if(center=='\0'){
                center=s[i];
                i++;
            }
            else{
                cout << "I'm Sorry Hansoo";
                return 0;
            }
        }
    }
    
    if(center != '\0') r.push(center);
    while(!l.empty()) {
        r.push(l.top());
        l.pop();
    }
    while(!r.empty()){
        cout << r.top();
        r.pop();
    }
}