#include <stdio.h>

int SUM(int n){
    int sum=1;
    while(n>0){
        sum*=n;
        n--;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    
    printf("%d", SUM(n));
}