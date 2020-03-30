#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void init(int *num, int res){
    int idx=0;
    while(res>0){
        idx= res%10;
        num[idx]++;
        res/=10;
    }
    
    for(int i=0; i<10; i++){
        printf("%d\n", num[i]);
    }
}

int main(){
    int *num = (int*)malloc(sizeof(int)*SIZE);
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int res=a*b*c;
    
    init(num, res);
}