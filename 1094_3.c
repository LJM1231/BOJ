#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void cut(int a[], int idx, int value){
    a[idx] = a[idx+1] = value;
}

int sum(int a[], int idx){
    int res=0;
    for(int i=0; i<=idx; i++) res += a[i];
    return res;
}

int main(){
    int *stick = (int*)malloc(sizeof(int)*SIZE);
    int idx=0;
    int length = 64;
    int want;
    scanf("%d", &want);
    
    if(want==length) printf("1\n");
    else{
        while(length){
            length = length>>1;
            cut(stick, idx, length);
            if(sum(stick, idx)<want) idx++;
            if(sum(stick, idx) == want) break;
        }
        printf("%d\n", idx+1);
    }
}