#include<stdio.h>

int main() {
    int n, a;
    int b, sum=0, max=0;
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(i>0){
            if(a-b>0){
                sum += a-b;
            }
            else sum = 0;
            
            if(sum>max){
                max=sum;
            }
        }
        b=a;
    }
    printf("%d", max);
    return 0;
}