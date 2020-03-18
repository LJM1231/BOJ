#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    //첫째줄
    for(int i=0; i<n; i++) printf("*");
    for(int i=0; i<n*2-3; i++) printf(" ");
    for(int i=0; i<n; i++) printf("*");
    printf("\n");
    
    //둘째줄부터 
    for(int i=1; i<n-1; i++){
        for(int j=0; j<i; j++) printf(" ");
        printf("*");
        for(int j=0; j<n-2; j++) printf(" ");
        printf("*");
        for(int j=0; j<(2*(n-i)-3); j++) printf(" ");
        printf("*");
        for(int j=0; j<n-2; j++) printf(" ");
        printf("*");
        printf("\n");
    }
    
    //중간
    for(int i=0; i<n-1; i++) printf(" ");
    printf("*");
    for(int i=0; i<n-2; i++) printf(" ");
    printf("*");
    for(int i=0; i<n-2; i++) printf(" ");
    printf("*");
    printf("\n");
    
    //중간부터 끝-1
    for(int i=n-2; i>0; i--){
        for(int j=0; j<i; j++) printf(" ");
        printf("*");
        for(int j=0; j<n-2; j++) printf(" ");
        printf("*");
        for(int j=0; j<(2*(n-i)-3); j++) printf(" ");
        printf("*");
        for(int j=0; j<n-2; j++) printf(" ");
        printf("*");
        printf("\n");
    }
    
    for(int i=0; i<n; i++) printf("*");
    for(int i=0; i<n*2-3; i++) printf(" ");
    for(int i=0; i<n; i++) printf("*");
}