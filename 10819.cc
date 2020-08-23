#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    int max=0;
    cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    while(next_permutation(v.begin(), v.end())){
        int sum=0;
        for(int i=0; i<n-1; i++){
            sum += abs(v[i]-v[i+1]);
        }
        if(sum > max) max=sum;
    }
    
    cout << max;
}