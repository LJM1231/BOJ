#include <stdio.h>

int main() {
    int a, b;
    int cnt=0, limit=1, sum=0;
    
    scanf("%d %d", &a, &b);
    for(int i=0; i<b; i++, cnt++){
        if(cnt>= limit){
            cnt = 0;
            limit++;
        }
        if(i>= a-1){
            sum += limit;
        }
    }
    printf("%d", sum);
}