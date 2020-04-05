#include <stdio.h>
#include <string.h>
#define MAX 16

int n, m, k;
int arr[MAX][MAX];
int d[MAX][MAX];

int main(){
    scanf("%d %d %d", &n, &m, &k);
    
    if(k!=0){
        int mi, mj, cnt=0;
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cnt++;
                if(cnt==k){
                    mi=i;
                    mj=j;
                }
            }
        }
        
        d[1][1]=1;
        for(int i=1; i<=mi; i++){
            for(int j=1; j<=mj; j++){
                if(i==1 && j==1) continue;
                d[i][j] = d[i-1][j] + d[i][j-1];
            }
        }
        
        int mr= d[mi][mj];
        
        memset(d, 0, sizeof(d));
        
        d[mi][mj] = 1;
        for(int i=mi; i<=n; i++){
            for(int j=mj; j<=m; j++){
                if(i==mi && j==mj) continue;
                
                d[i][j] = d[i-1][j] + d[i][j-1];
            }
        }
        printf("%d\n", mr*d[n][m]);
    }
    
    else{
        d[1][1]=1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(i==1 && j==1) continue;
                d[i][j] = d[i-1][j] + d[i][j-1];
            }
        }
        printf("%d\n", d[n][m]);
    }
}