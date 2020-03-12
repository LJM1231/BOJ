#include <stdio.h>

int men[20][20];

int getmen(int r, int c){
    int res=0;
    for(int i=1; i<=c; i++){
        res += men[r][i];
    }
    return res;
}

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int k, n;
        scanf("%d %d", &k, &n);
        
        for(int c=1; c<=n; c++) men[0][c] = c;
        
        for(int r=1; r<k; r++){
            for(int c=1; c<=n; c++){
                men[r][c] = getmen(r-1, c);
            }
        }
        printf("%d\n", getmen(k-1, n));
    }
}