#include <stdio.h>

int main(void){
    int n;
    int cnt=1, temp=1;
    
    scanf("%d", &n);
    
    if(n==1){
        cnt=1;
    }
    else{
        for(int i=2; i<=n; i++){
            if(temp+(cnt-1)*6<i){
                cnt++;
                temp=i-1;
            }
        }
    }
    printf("%d", cnt);
}