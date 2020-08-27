#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    vector<pair<int, int> > a(n);
    
    for(int i=0; i<n; i++){
        scanf("%d %d", &a[i].second, &a[i].first);
    }
    sort(a.begin(), a.end());
    
    for(int i=0; i<a.size(); i++){
        printf("%d %d\n", a[i].second, a[i].first);
    }
}