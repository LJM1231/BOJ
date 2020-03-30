#include <stdio.h>

char a[10];

int main(){
    for(int i=0; i<10; i++)
        a[i] = i*10;
        
    char *pend = a+10;
    char *pi = NULL;
    
    for(pi=a; pi!= pend; pi++){
        printf("value: %d, pos : %p\n", *pi, pi);
    }
}