#include <stdio.h>

int main() {
    int n;
    int h, t, o;
    int cnt=0;
    
    scanf("%d", &n);
    
    if(n<100) {printf("%d", n);}
    else{
        for(int i=100; i<=n; i++) {
            h = i/100;
            t = (i%100)/10;
            o = (i%100)%10;
            if( (h-t) == (t-o)){
                cnt++;
                
            }
        }
        printf("%d", cnt+99);
    }
    return 0;
}