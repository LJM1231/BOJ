#include<stdio.h>

int main(){
    int T, M, N, x, y;
    int ans;
    
    scanf("%d", &T);
    
    while(T--){
        scanf("%d %d %d %d", &M, &N, &x, &y);
        
        ans = x;
        x%=M;
        y%=N;
        
        while((ans<=M*N) && ans%N!=y){
            ans+=M;
        }
        if(ans>M*N){
            printf("-1\n");
        }
        else{
            printf("%d\n", ans);
        }
    }
}