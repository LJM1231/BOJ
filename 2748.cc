#include <iostream>

using namespace std;

/*int arr[91];

int Pi(int x){
    int res;
    if(x==0) return 0;
    if(x==1 || x==2) return 1;
    if(arr[x]!=0) return arr[x];
    
    return arr[x] = Pi(x-1)+Pi(x-2);
}

int main(){
    int n;
    scanf("%d", &n);
    
    printf("%d", Pi(n));
}*/

long long arr[90];

long long Fi(int x){
    int res;
    if(x==0) return 0;
    if(x==1||x==2) return 1;
    if(arr[x]!=0) return arr[x];
    
    return arr[x] = Fi(x-1)+Fi(x-2);
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%lld", Fi(N));
}