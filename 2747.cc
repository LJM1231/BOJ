#include <iostream>

using namespace std;

int arr[45];

int Pi(int x){
    int res;
    if(x==1) return 1;
    if(x==2) return 1;
    if(arr[x]!=0) return arr[x];
    
    return arr[x] = Pi(x-1)+Pi(x-2);
}

int main(){
    int n;
    scanf("%d", &n);
    
    printf("%d", Pi(n));
}