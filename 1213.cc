#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arr[26];

int main(){
    string s;
    cin >> s;
    
    for(int i=0; i<s.length(); i++){
        arr[s[i]-'A']++;
    }
    
    int err=0, mid=-1;
    
    for(int i=0; i<26; i++){
        if(arr[i]%2==1){
            mid=i;
            arr[i]--;
            err++;
        }
    }
    
    if(err>1) cout << "I'm Sorry Hansoo\n";
    else{
        string res = "";
        string temp = "";
        for(int i=0; i<26; i++){
            if(arr[i]>0){
                for(int j=0; j<arr[i]/2; j++) res+= i+'A';
            }
        }
        temp = res;
        reverse(temp.begin(), temp.end());
        if(mid!=-1){
            res += mid+'A';
        }
        res += temp;
        cout << res;
    }
}