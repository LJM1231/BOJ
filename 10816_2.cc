#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#define MAX 10000000

using namespace std;

int have[MAX*2+1];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N;
    int input;
    for(int i=0; i<N; i++){
        cin >> input;
        have[input+MAX]++;
    }
    
    cin >> M;
    for(int i=0; i<M; i++){
        cin >> input;
        cout << have[input+MAX] <<' ';
        /*if(have[input+MAX]==1) cout << 1<< ' ';
        else cout << 0<<' ';*/
    }
}