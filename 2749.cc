#include <iostream>

using namespace std;

#define mod 1000000
#define per 1500000

int main(){
    int arr[1500100];
    
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<=per; ++i){
        arr[i] = (arr[i-2] + arr[i-1]) %mod;
    }
    
    long long n;
    scanf("%lld", &n);
    printf("%d", arr[n%per]);
}