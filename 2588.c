#include <stdio.h>

int main() {
    int a, b;
    int out1, out2, out3;
    int res;
    
    scanf("%d %d", &a, &b);
    
    out1 = a*((b%100)%10);
    out2 = a*((b%100)/10);
    out3 = a*(b/100);
    res = a*b;
    
    printf("%d\n", out1);
    printf("%d\n", out2);
    printf("%d\n", out3);
    printf("%d\n", res);
    return 0;
}