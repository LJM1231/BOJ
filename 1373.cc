#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    int len = s.length();
    
    if(len%3==1) cout << s[0];//printf("%d", s[0]);
    else if(len%3==2) cout << ((s[0]-'0')*2 + s[1]-'0');//printf("%d", (s[0]-'0')*2 + s[1]-'0');
    
    for(int i=len%3; i<len; i+=3){
        cout << ((s[i]-'0')*4) + ((s[i+1]-'0')*2) + ((s[i+2]-'0'));
        //printf("%d", ((s[i]-'0')*4) + ((s[i+1]-'0')*2) + ((s[i+2]-'0')));
    }
}