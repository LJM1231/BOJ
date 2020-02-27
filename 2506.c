#include <stdio.h>

int main(void){
    int n, a;
    int sum=0, cnt=0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        
        if(a==1){
            cnt++;
            sum += cnt;
        }
        else if(a==0){
            cnt = 0;
        }
    }
        printf("%d", sum);
}