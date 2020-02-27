#include <stdio.h>

int main(void){
    int n;
    int sum=0;
    
    for(int i=0; i<5; i++){
        scanf("%d", &n);
        if(n<40) {
            sum+=40;
        }
        else if(n>=40) sum+=n;
    }
    printf("%d", sum/5);
    
}