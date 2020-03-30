#include <stdio.h>
#define SIZE 5

int main(){
    int numbers[SIZE];
    printf("Input\n");
    
    int n=0;
    for(int i=0; i<SIZE; i++){
        scanf("%d ", &n);
        numbers[i] = n;
    }
    
    printf("Print\n");
    
    int i=SIZE;
    while(i--){
        printf("%d\n", numbers[i]);
    }
    return 0;
}