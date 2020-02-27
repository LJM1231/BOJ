#include <stdio.h>

int main() {
    int n;
    int a, sum=0;
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(i+1 != a) sum ++;
        
    }
    printf("%d", sum);
    return 0;
}