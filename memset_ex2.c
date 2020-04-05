#include <stdio.h>
#include <stdlib.h> //malloc
#include <string.h> //memset, memcpy

int main(){
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10,11,12,13,14,15};
    int *c = (int*)malloc(sizeof(int)*5);
    memset(c, 0x00, 20);
    
    int d[4][5];
    memcpy(d[0], a, 20);
    memcpy(d[1], b, 20);
    memcpy(d[2], b+5, 20);
    memcpy(d[3], c, 20);
    
    for(int r=0; r<4; r++){
        for(int c=0; c<5; c++){
            printf("%02d ", d[r][c]);
        }
        printf("\n");
    }
    free(c);
}