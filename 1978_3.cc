#include <iostream>

using namespace std;

int isPrime(int n){
    if(n==1) return 0;
    for(int i=2; i<n; i++){
        if((n%i)==0) return 0;
    }
    return 1;
}

int main() {
    int n, v;
    scanf("%d", &n);
    
    int cnt = 0;
    while(n--){
        scanf("%d", &v);
        if(isPrime(v)) cnt++;
    }
    printf("%d", cnt);
    
}