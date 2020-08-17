#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Add(string &s1, string &s2){
    string res(max(s1.size(), s2.size()), '0');
    bool carry = false;
    
    for(int i=0; i<res.size(); i++){
        int temp=carry;
        carry=false;
        
        if(i<s1.size()) temp+=s1[s1.size()-i-1] -'0';
        if(i<s2.size()) temp += s2[s2.size()-i-1] -'0';
        if(temp>=10){
            carry=true;
            temp -= 10;
        }
        res[res.size()-i-1] = temp+'0';
    }
    if(carry){
        res.insert(res.begin(), '1');
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int N;
    cin >> N;
    
    string a="0", b="1";
    if(N==0){
        cout << a << "\n";
    }
    else if(N==1){
        cout << b << "\n";
    }
    else{
        string res;
        for(int i=0; i<=N-2; i++){
            res = Add(a,b);
            a=b;
            b=res;
        }
        cout << res << "\n";
    }
    return 0;
}