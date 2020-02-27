#include <stdio.h>

int main(void){
    int T;
    int n, a, sum=0;
    
    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
        scanf("%d", &n);
        for(int j=0; j<n; j++){
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
        sum=0;
    }
    return 0;
}