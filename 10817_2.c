#include <stdio.h>

void swap(int &a, int &b){
    int t= a;
    a=b;
    b=t;
}

int main() {
    int a=0, b=0, c=0;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b) swap(a, b);
    
    if(c<a) printf("%d\n", a);
    else if( c>=a && c<b) printf("%d\n", c);
    else printf("%d\n", b);
}