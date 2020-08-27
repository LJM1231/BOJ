#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[1001];

void asdf(){
    arr[0] = arr[1] = -1;
    for(int i=2; i<=1001; i++){
        arr[i] = i;
        
    }
    int sqrtN = int(sqrt(1001));
    for(int i=2; i<=sqrtN; i++){
        if(arr[i] == i){
            for(int j=i*i; j<=1001; j+=i){
                if(arr[j] == j) arr[j]=i;
            }
        }
    }
}

int main(){
    int N;
    cin >> N;
    
    int cnt=0;
    
    asdf();
    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        if(arr[num] == num) cnt++;
    }
    cout << cnt << '\n';
}