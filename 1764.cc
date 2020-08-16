#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> v, result;
    
    string s;
    
    for(int i=1; i<=N; i++){
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    
    for(int i=N+2; i<=N+M; i++){
        cin >> s;
        
        if(binary_search(v.begin(), v.end(), s)){
            result.push_back(s);
        }
    }
    sort(result.begin(), result.end());
    
    cout << result.size()<<endl;
    for(int i=0; i<result.size(); i++){
        cout << result[i] << endl;
    }
    return 0;
}