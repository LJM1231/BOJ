#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void initarray(int a[], int len);
void printarray(int *a, int len);

int main(){
    int a[SIZE];
    int *b = (int*)malloc(sizeof(int)*SIZE);
    
    initarray(a, SIZE);
    initarray(b, SIZE);
    
    printarray(a, SIZE);
    printarray(b, SIZE);
}

void initarray(int a[], int len){
    for(int i=0; i<len; i++){
        a[i] = i;
    }
}

void printarray(int *a, int len){
    for(int i=0; i<len; i++){
        printf("%d ", *(a+i));
    }
    printf("\n");
}