#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    string str;
    cin >> str;
    stack<int> s;
    char before;
    int result=0;
    
    for(auto c:str){
        if(c=='('){
            s.push(1);
        }
        else{
            s.pop();
            
            if(before=='(') result += s.size();
            else result++;
        }
        before=c;
    }
    cout << result;
}