#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, input;
    cin >> N;
    priority_queue<int, vector<int>, greater<int> > q;
    
    while(N--){
        cin >> input;
        
        if(input==0){
            if(!q.empty()){
                cout << q.top() << '\n';
                q.pop();
            }
            else cout << '0' << '\n';
        }
        else{
            q.push(input);
        }
    }
}