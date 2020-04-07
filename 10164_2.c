#include <stdio.h>

int d[20][20];

int dp(int r, int c){
    if(r==0 || c==0) return 1;
    if(d[r][c]>0) return d[r][c];
    
    //위에서 아래로 이동하거나 좌에서 우로 이동가능
    //='점화식'
    d[r][c] = dp(r-1, c) + dp(r, c-1);
    return d[r][c];
}

int main(){
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    
    if(k==0) {
        printf("%d", dp(n-1, m-1));
    }
    else {
        //출발~경유
        int r1 = (k-1)/m;
        int c1 = (k-1)%m;
        
        //경유~종료
        int r2 = n-r1-1;
        int c2 = m-c1-1;
        
        //두개의 모든 경로의 수를 곱하면 모든 경로의 수
        printf("%d", dp(r1, c1) * dp(r2,c2));
    }
}