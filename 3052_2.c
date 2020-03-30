#include <stdio.h>
#include <stdlib.h>
#define SIZE 42

void print(int *rest){
    int n=10;
    int cnt=0;
    while(n--){
        int v;
        scanf("%d", &v);
        
        if(++rest[v%42] == 1) cnt++;
    }
    printf("%d\n", cnt);
}

int main(){
    int *rest = (int*)malloc(sizeof(int)*SIZE);
    
    print(rest);
}