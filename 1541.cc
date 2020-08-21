#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    string temp="";
    int m=0;
    int result=0;
    
    for(int i=0; i<=str.size(); i++){
        if(str[i]=='-' || str[i] == '+' || str[i] == NULL){
            if(m==1) {result -= stoi(temp);}
            else {result += stoi(temp);}
            temp = "";
            if(str[i] == '-') {m=1;}
        }
        else temp += str[i];
    }
    cout << result;
}