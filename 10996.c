#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    for(int i=0; i<n*2; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                if(j%2==0) printf("*");
                else printf(" ");
            }
        }
        else {
            for(int j=0; j<n; j++){
                if(j%2==0) printf(" ");
                else printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}