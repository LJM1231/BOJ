#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    int a[26]={0};
    
    for(int i=0; i<str.length(); i++){
        a[str[i]-'a']++;
    }
    
    for(int i=0; i<26; i++){
        cout << a[i] << " ";
    }
}