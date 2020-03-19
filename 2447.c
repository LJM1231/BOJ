#include <stdio.h>

void map(int x, int y, int size){
    if((x/size)%3==1 && (y/size)%3==1) printf(" ");
    else {
        if(size/3==0) printf("*");
        else map(x, y, size/3);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            map(i, j, n);
        }
        printf("\n");
    }
    return 0;
}