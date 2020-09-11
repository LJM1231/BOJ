#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {
    int A, B, m, ans=0;
    cin >> A >> B;
    cin >> m;
    
    int num[m];
    for(int i=0; i<m; i++){
        cin >> num[i];
        ans = ans*A + num[i];
    }
    
    vector<int> v;
    while(ans){
        v.push_back(ans%B);
        ans/=B;
    }
    reverse(v.begin(), v.end());
    
    for(auto x:v) cout << x << ' ';
}
