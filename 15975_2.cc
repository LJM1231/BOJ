#include <iostream>
#include <algorithm>
#define INF 2147483647

using namespace std;
pair<int, int> v[100001];

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
        scanf("%d %d", &v[i].second, &v[i].first);
    sort(v, v+n);
    
    long long sum = 0;
    for(int i=0; i<n; i++){
        int m=INF;
        if(i>0){
            if(v[i].first == v[i-1].first){
                if(m>v[i].second - v[i-1].second)
                    m=v[i].second - v[i-1].second;
            }
        }
        if(i<n-1){
            if(v[i].first == v[i+1].first){
                if(m>v[i+1].second - v[i].second)
                    m=v[i+1].second - v[i].second;
            }
        }
        if(m!=INF) sum += m;
    }
    printf("%lld", sum);
}