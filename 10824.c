#include <stdio.h>

int main(){
    char s[101];
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
    long long A, B;
    
    sprintf(s, "%lld%lld %lld%lld", a,b,c,d);
    sscanf(s, "%lld %lld", &A, &B);
    
    printf("%lld\n", A+B);
}