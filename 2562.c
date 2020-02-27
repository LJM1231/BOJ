#include <stdio.h>

int main() {
    int a, min=0, check=0;
    
    for(int i=0; i<9; i++){
        scanf("%d", &a);
        if(a>min) {
            min = a;
            check = i+1;
        }
    }
    printf("%d \n", min);
    printf("%d", check);
}