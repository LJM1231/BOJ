#include <stdio.h>
#define MAX 4000

int w, h, offset[4][2] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
char MAP[MAX][MAX];

int invalid(int r, int c){
	return r<0 || r>=h || c<0 || c>=w;
}

int main(){
    int n;
    scanf("%d", &n);
    if(n==1){
        printf("*");
        return 0;
    }
    w = n*4-3;
    h = n*4-1;
    
    int r=0, c=w-1, dir=0, turn = 0;
    
    while(1){
        MAP[r][c] = 1;
        if(turn>=3 && MAP[r+offset[dir][0]*2][c+offset[dir][1]*2]) dir = (dir+1)%4;
        else if(invalid(r+offset[dir][0], c+offset[dir][1])) dir = (dir+1)%4;
		if(MAP[r+offset[dir][0]*2][c+offset[dir][1]*2]) break;
		r += offset[dir][0];
		c += offset[dir][1];
		turn++;
    }
	for(int i=0; i<h; i++){
		if(i==1) printf("*");
		else for(int j=0; j<w; j++) printf("%c", MAP[i][j] ? '*' : ' ');
		printf("\n");
	}
}