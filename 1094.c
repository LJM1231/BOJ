#include<stdio.h>

int main() {
    int x, n=0;
    
    scanf("%d", &x);
    
    while(x!=0){
        if(x%2 == 1) n++;
        x /= 2;
    }
    printf("%d", n);
}