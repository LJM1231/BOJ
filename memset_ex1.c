#include <stdio.h>
#include <string.h>

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i<10; i++) printf("%d ", a[i]);
    printf("\n");
    
    int value = 10;
    void *ptr = a;
    while(ptr != a+10){
        memset(ptr, value--, 1);
        ptr += 4;
    }
    for(int i=0; i<10; i++) printf("%d ", a[i]);
}