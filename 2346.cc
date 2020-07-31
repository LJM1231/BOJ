#include <iostream>
#include <vector>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;
    cin >> N;
    vector<pair<int, int> > v;
    
    for(int i=1; i<=N; i++){
        int num;
        cin >> num;
        
        v.push_back(make_pair(i, num));
    }
    
    while(!v.empty()) {
        cout << v.front().first << " ";
        int move = v.front().second;
        v.erase(v.begin());
        
        if(move>0){
            for(int i=0; i<move-1; i++){
                v.push_back(v.front());
                v.erase(v.begin());
            }
        }
        else{
            for(int i=0; i<-move; i++){
                v.insert(v.begin(), v.back());
                v.erase(v.end());
            }
        }
    }
    return 0;
}