#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int>a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    int N;
    cin >> N;
    vector<pair<int, int> > v;
    
    for(int i=0; i<N; i++){
        int input;
        cin >> input;
        v.push_back(make_pair(i, input));
    }
    
    sort(v.begin(), v.end(), cmp);
    
    int time=0;
    int temp=0;
    for(int i=0; i<N; i++){
        temp+=v[i].second;
        time += temp;
    }
    cout << time;
}