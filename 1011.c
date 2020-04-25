#include <stdio.h>
#include <string.h>

void Ptr(int a){
    long i=2, j=2, cnt=0;
    
    if(a==1 || a==2){
        printf("%d\n", (a==1) ? 1:2);
        return 0;
    }
    
    while(1){
        if(cnt==2){
            i++;
            cnt=0;
        }
        j+=i;
        cnt++;
        if(j>=a) break;
    }
    printf("%ld\n", (cnt==1) ? i*2-1 : i*2);
}

int main(){
    int t, x, y;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++){
        scanf("%d %d", &x, &y);
        Ptr(y-x);
    }
    return 0;
}