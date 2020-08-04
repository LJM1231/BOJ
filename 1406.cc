#include <iostream>
#include <algorithm>
//#include <vector>
//#include <deque>
#include <stack>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string str;
    cin >> str;
    
    int M;
    cin >> M;
    
    stack<char> head;
    stack<char> tail;
    
    for(int i=0; i<str.length(); i++){
        head.push(str[i]);
    }
    
    while(M--){
        char c;
        cin >> c;
        
        if(c == 'L'){
            if(!head.empty()){
                tail.push(head.top());
                head.pop();
            }
        }
        else if(c == 'D'){
            if(!tail.empty()){
                head.push(tail.top());
                tail.pop();
            }
        }
        else if(c == 'B'){
            if(!head.empty()){
                head.pop();
            }
        }
        else if(c == 'P'){
            cin >> c;
            head.push(c);
        }
    }
    
    while(!tail.empty()){
        head.push(tail.top());
        tail.pop();
    }
    
    string answer;
    while(!head.empty()){
        answer += head.top();
        head.pop();
    }
    reverse(answer.begin(), answer.end());
    
    cout << answer;
}