#include <stdio.h>
#include <stdlib.h>
#define FSIZE 3
#define SSIZE 2



int Food(int a[], int len){
    int min=2000;
    for(int i=0; i<len; i++){
        scanf("%d", &a[i]);
        if(min>a[i]) min=a[i];
    }
    return min;
}
int Soda(int b[], int len){
    int min=2000;
    for(int i=0; i<len; i++){
        scanf("%d", &b[i]);
        if(min>b[i]) min=b[i];
    }
    return min;
}

int main(){
    int *a = (int*)malloc(sizeof(int)*FSIZE);
    int *b = (int*)malloc(sizeof(int)*SSIZE);
    
    // Food(a, FSIZE);
    // Soda(b, SSIZE);
    
    printf("%d\n", Food(a,FSIZE)+Soda(b,SSIZE)-50);
    
    return 0;
}