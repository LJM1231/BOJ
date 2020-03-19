#include <stdio.h>
#define MAX 4000

char MAP[MAX][MAX] ={0};

void solve(int depth, int x, int y){
    if(depth==1){
        MAP[x][y] = 1;
        return;
    }
    int w = (2<<depth)-3;
    int h = (1<<depth)-1;
    if(depth%2){
        for(int i=0; i<w; i++){
            MAP[x+h-1][y+i] = 1;
        }
        for(int i=0; i<h-1; i++){
            MAP[x+i][y+w/2-i] = MAP[x+i][y+w/2+i] = 1;
        }
        solve(depth-1, x+h/2, y+(1<<(depth-1)));
    }
    else{
        for(int i=0; i<w; i++){
            MAP[x][y+i] = 1;
        }
        for(int i=1; i<h; i++){
            MAP[x+i][y+i] = MAP[x+i][y+w-i-1] = 1;
        }
        solve(depth-1, x+1, y+(1<<(depth-1)));
    }
}

int main(){
    int n;
    scanf("%d", &n);
    solve(n, 0, 0);
    int width=(2<<n)-3;
    int height=(1<<n)-1;
    for(int i=0; i<height; i++){
        for(int j=0; j<(n%2 ? width-height+i+1 : width-i); j++)
            printf("%c", MAP[i][j] ? '*' : ' ');
        printf("\n");
    }
}