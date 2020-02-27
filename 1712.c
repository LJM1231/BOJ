#include <stdio.h>

int main() {
    int a, b, c;
    int x;
    
    scanf("%d %d %d", &a, &b, &c);
    
    x = c-b;
    if(x<=0) printf("-1");
    else{
        printf("%d", a/x+1);
    }
    return 0;
}