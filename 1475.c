#include <stdio.h>

int max(int a, int b){
    if(a>=b) return a;
    else return b;
}

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[10]={0};
    
    while(1){
        arr[n%10]++;
        if(n/10==0) break;
        n/=10;
    }
    
    int num=0;
    for(int i=0; i<10; i++){
        if(i!=9 && i!=6)
            num=max(num, arr[i]);
    }
    
    printf("%d", max(num, (arr[6]+arr[9]+1)/2));
    return 0;
}