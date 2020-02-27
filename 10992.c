#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    for(int i=0; i<1; i++){
        for(int j=0; j<n-1; j++) printf(" ");
        printf("*");
        printf("\n");
    }
    for(int i=1; i<n; i++){
        if(i<n-1){
            for(int j=1; j<n-i; j++) printf(" ");
            printf("*");
            for(int j=0; j<i*2-1; j++) printf(" ");
            printf("*");
            printf("\n");
        }
        else{
            for(int j=0; j<n*2-1; j++) printf("*");
        }
    }
    
    return 0;
}