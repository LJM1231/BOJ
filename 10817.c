#include<stdio.h>

int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>=c && b>=c){
        if(a>=b) printf("%d", b);
        else printf("%d", a);
    }
    else if(a>=b && c>=b){
        if(a>=c) printf("%d", c);
        else printf("%d", a);
    }
    else if(c>=a && b>=a){
        if(c>=b) printf("%d", b);
        else printf("%d", c);
    }
}
