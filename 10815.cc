#include <iostream>
#include <algorithm>
//#include <vector>
using namespace std;

int have[10000000*2+1] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    int num;
    for(int i=0; i<N; i++){
        cin >> num;
        have[num+10000000] = 1;
    }
    
    int M;
    cin >> M;
    for(int i=0; i<M; i++){
        cin >> num;
        if(have[num+10000000]) cout << 1 << ' ';
        else cout << 0 << ' ';
    }
}