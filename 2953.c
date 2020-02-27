#include <stdio.h>

int main() {
    int a, sum=0, max=0, ch=0;
    
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &a);
            sum += a;
        }
        if(max<sum){
            max=sum;
            ch = i+1;
        }
        sum=0;
    }
    
    printf("%d %d", ch, max);
    return 0;
}