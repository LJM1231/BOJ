#include <stdio.h>

int main() {
    int n, a;
    int sum=0;
    
    scanf("%d", &n);
    
    for(int i=0; i<5; i++){
        scanf("%d", &a);
        if(n==a) sum += 1;
    }
    printf("%d", sum);
    return 0;
}