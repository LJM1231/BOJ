#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main() {
    int N;
    cin >> N;
    vector<pair<int ,int> > v;
    
    int cnt=0;
    for(int i=0; i<N; i++){
        int start, end;
        cin >> start >> end;
        v.push_back(make_pair(start, end));
    }
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), cmp);
    
    int min = v[0].second;
    cnt++;
    
    for(int i=1; i<N; i++){
        if(v[i].first>=min){
            min = v[i].second;
            cnt++;
        }
    }
    cout << cnt;
}