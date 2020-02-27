#include<stdio.h>

int main(){
    int M, N;
    int sum=0;
    int min=10000;
    
    scanf("%d %d", &M, &N);
    
    for(int i=1; i*i<=N; i++){
        if(i*i>=M && i*i<=N){
            if(min>i*i) min=i*i;
            sum += i*i;
        }
    }
    if(sum == 0) printf("-1\n");
    else printf("%d\n%d", sum, min);
}