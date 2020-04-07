#include <stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    int need[n], mx=0, sum=0;
    for(int i=0; i<n; i++) {
        scanf("%d", &need[i]);
        sum+=need[i];
        if(mx<need[i]) mx = need[i]; //지방예산중 최대값찾기
    }
    scanf("%d", &m); //최대예산
    
    if(m>sum) printf("%d", mx);
    else {
        while(1){
            if(sum<=m) break;
            
            mx--; //지방예산 최대값을 삭감처리
            sum=0;
            for(int i=0; i<n; i++){
                need[i] = (need[i]>mx) ? mx:need[i];
                sum+=need[i];
            }
        }
        printf("%d", mx);
    }
}