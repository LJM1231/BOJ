#include <stdio.h>

int main(){
    int n, x;
    scanf("%d", &n);
    
    int sum=0;
    while(n--){
        scanf("%1d", &x); //한자리의 수만 읽는다
        sum+=x;
    }
    printf("%d\n", sum);
}