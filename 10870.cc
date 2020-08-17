#include <iostream>
using namespace std;
int arr[21];

int Fi(int x){
    if(x==0) return 0;
    if(x==1) return 1;
    if(arr[x]!=0) return arr[x];
    
    return Fi(x-1)+Fi(x-2);
}

int main(){
    int n;
    scanf("%d", &n);
    
    printf("%d", Fi(n));
}