#include <iostream>
#include <algorithm>

using namespace std;

int n;
string str[20000];

bool cmp(string a, string b){
    if(a.length() == b.length())
        return a<b;
        
    else return a.length() < b.length();
}

int main() {
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> str[i];
    }
    sort(str, str+n, cmp);
    
    for(int i=0; i<n; i++){
        if(i>0 && str[i-1]==str[i]) continue;
        cout << str[i] << endl;
    }
}