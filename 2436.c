#include<stdio.h>

int gcd(int a, int b){
    if(!b) return a;
    if(a>b) return gcd(b, a%b);
    
    return gcd(a, b%a);
}

int main(){
    int a, b;
    int res1, res2;
    
    scanf("%d %d", &a, &b);
    b/=a;
    
    for(int i=1; i*i<=b; i++){
        if(b%i == 0){
            if(gcd(i, b/i) == 1){
                res1 = i;
                res2 = b/i;
            }
        }
    }
    
    printf("%d %d", res1*a, res2*a);
    
    return 0;
}