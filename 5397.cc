#include <iostream>
#include <algorithm>
//#include <vector>
//#include <deque>
#include <stack>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int T;
    cin >> T;
    
    while(T--){
        string L;
        cin >> L;
        
        stack<char> head;
        stack<char> tail;
        
        for(int i=0; i<L.length(); i++){
            if(L[i] == '<'){
                if(!head.empty()){
                    tail.push(head.top());
                    head.pop();
                }
            }
            else if(L[i] == '>'){
                if(!tail.empty()){
                    head.push(tail.top());
                    tail.pop();
                }
            }
            else if(L[i] == '-'){
                if(!head.empty()){
                    head.pop();
                }
            }
            else head.push(L[i]);
        }
        while(!tail.empty()){
            head.push(tail.top());
            tail.pop();
        }
        
        string answer;
        while(!head.empty()){
            answer+=head.top();
            head.pop();
        }
        reverse(answer.begin(), answer.end());
        cout << answer << '\n';
    }
}