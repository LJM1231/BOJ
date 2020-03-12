#include <stdio.h>

int main(){
    int n, sum=0;
    int a[101]={0};
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) scanf("%d", &a[i]);
    
    for(int i=n; i>0; i--){
        while(a[i]<=a[i-1]){
            a[i-1]--;
            sum++;
        }
    }
    printf("%d", sum);
    
    return 0;
}