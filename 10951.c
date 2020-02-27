#include<stdio.h>

int main(){
    int a, b;
    
    
    while(scanf("%d %d", &a, &b) != -1){ //EOF
        printf("%d\n", a+b);
    }
}