#include <iostream>
#include <algorithm>
//#include <vector>
using namespace std;
#define MAX 10000000

int have[MAX*2+1];
int cnt[MAX*2+1];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    int num;
    for(int i=0; i<N; i++){
        cin >> num;
        have[num+MAX] = 1;
        cnt[num+MAX]++;
    }
    
    int M;
    cin >> M;
    for(int i=0; i<M; i++){
        cin >> num;
        if(have[num+MAX]) cout << cnt[num+MAX] << ' ';
        else cout << 0 << ' ';
    }
}