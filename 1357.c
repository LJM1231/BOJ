#include<stdio.h>

int rev(int n){
    int revn = 0;
    while(n>0){
        revn *= 10;
        revn += n%10;
        n = n/10;
    }
    return revn;
}

int main(){
    int X,Y;
    
    scanf("%d %d", &X, &Y);
    
    printf("%d", rev(rev(X) + rev(Y)));
}