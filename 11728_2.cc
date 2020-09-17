#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, m, v;
    cin >> n >> m;
    
    multiset<int> data;
    //전체 데이터를 읽고 multiset 구조에 추가한다
    for(int i=0; i<n+m; i++){
        scanf("%d", &v);
        data.insert(v);
    }
    for(int x:data) cout << x << " ";
}