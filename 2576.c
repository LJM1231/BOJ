#include <stdio.h>

int main(void){
    int n;
    int sum=0, min;
    
    for(int i=0; i<7; i++){
        scanf("%d", &n);
        if(n%2==1) {
            sum+=n;
            if(min>n){ min=n;}
        }
    }
    
    if(sum!=0){
        printf("%d\n", sum);
        printf("%d", min);
    }
    else printf("-1");
    
    return 0;
}