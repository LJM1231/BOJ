#include <stdio.h>
int main(){
    int w, h, p, q, t;
    
    scanf("%d %d %d %d %d", &w, &h, &p, &q, &t);
    
    p+=t;
    q+=t;
    p %= (2*w);
    q %= (2*h);
    if(p>w) p=2*w-p;
    if(q>h) q=2*h-q;
    
    printf("%d %d\n", p, q);
    return 0;
}