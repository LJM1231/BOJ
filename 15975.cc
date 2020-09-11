#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, locate, color, sum=0;
    vector<int> v[100001];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> locate >> color;
        v[color].push_back(locate);
    }
    for(int j=1; j<=n; j++){
        if(v[j].empty() || v[j].size() == 1) continue;
        else {
            sort(v[j].begin(), v[j].end());
            for(int k=0; k<v[j].size(); k++){
                if(k==0) sum += v[j].at(1) - v[j].at(0);
                else if(k==v[j].size() - 1) sum += v[j].at(k) - v[j].at(k-1);
                else{
                    int temp=v[j].at(k) - v[j].at(k-1);
                    int temp2=v[j].at(k+1) - v[j].at(k);
                    sum += min(temp, temp2);
                }
            }
        }
    }
    cout << sum;
}