#include<stdio.h>

int main(){
    int C, K, P;
    int sum=0;
    
    scanf("%d %d %d", &C, &K, &P);
    for(int i=1; i<=C; i++){
        sum += (K*i) + (P*(i*i));
    }
    
    printf("%d", sum);
}