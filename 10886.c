#include <stdio.h>

int main(void){
    int n, an;
    int sum=0;
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &an);
        if(an==1) sum++;
    }
    if(sum>(n/2)) printf("Junhee is cute!");
    else printf("Junhee is not cute!");
    
    return 0;
    
}