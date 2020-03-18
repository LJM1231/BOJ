#include <stdio.h>
#include <string.h>

int main(){
    int n, getnum;
    scanf("%d %d", &n, &getnum);
    
    int a[n][n];
    int d[4][2] = {{-1,0}, {0,1}, {1,0}, {0,-1}}; // Up, Right, Down, Left
    int cr = n/2, rr=0;
    int cc = cr, rc=0;
    int number = 1;
    a[cr][cc]= number;
    
    int mi=0, cnt=1, times=0;
    for(int i=0; i<n-1; i++){
        times = 2;
        while(times--){
            int t=cnt;
            while(t--){
                a[cr+=d[mi][0]][cc+=d[mi][1]] = ++number;
                if(number == getnum) {rr=cr; rc=cc;}
            }
            mi = (mi+1)%4;
        }
        cnt++;
    }
    while(--cnt){
        a[cr+=d[mi][0]][cc+=d[mi][1]] = ++number;
    }
    
    for(int r=0; r<n; r++){
        for(int c=0; c<n; c++){
            printf("%d ", a[r][c]);
        }
        printf("\n");
    }
    printf("%d %d", rr+1, rc+1);
}