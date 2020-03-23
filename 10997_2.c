#include <stdio.h>
#include <stdlib.h> //malloc
#include <string.h> //memset

void setdata(char** ar, int r, int c, int n){
    //ar: heap에 생성된 2차원 배열의 주소값을 받는다.
    //r : 최대 row값, 즉 높이값
    //c : 최대 column 값, 즉 너비값
    //n : 2차원 배열의 크기값. (n x n)
    int sx = r/2+1, sy=c/2; //start point, 중점
    ar[sx][sy] = '*';
    
    for(int i=0; i<c; i++) ar[0][i] = '*'; //최상단 수평별 셋팅
    for(int i=0; i<r; i++) ar[i][0] = '*'; //최좌단 수직별 셋팅
    
    int d=0; //direction, 별을 찍어나가는 방향값
    int cnt = (n-1)*4; // 별을 찍어야 하는 줄의 개수를 구함
    int times = 2; //처음에는 한 방향으로 별을 두개씩 찍는다.
    
    while(cnt--){
        for(int i=0; i<times; i++){
            switch(d){
                case 0: ar[--sx][sy] = '*'; break; //up
                case 1: ar[sx][++sy] = '*'; break; //right
                case 2: ar[++sx][sy] = '*'; break; //down
                case 3: ar[sx][--sy] = '*'; break; //left
            }
        }
        d = (d+1) % 4; //up-right-down-left 순서로 방향 전개
        if(cnt%2 == 0) times += 2;
        //2번의 방향으로 같은 개수의 별을 찍은 후, 찍어야 할 별의 개수를 2개씩 증가
    }
}

void printstar(char** ar, int r, int c){
    for(int x=0; x<r; x++){
        for(int y=0; y<c; y++){
            if(x==1 && y==1) break; //2번째줄 '*'에는 없다.
            printf("%c", ar[x][y]); //해당 데이터 문자를 출력
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    if(n==1){//'1'입력일 경우, 별하나 출력하고 그냥 종료
        printf("*");
        return 0;
    }
    
    int r=4*n-1; //입력값, n에 따라 높이값 계산
    int c=4*n-3; //입력값, n에 따라 너비값 계산
    
    //힙 메모리에 크기에 맞는 공간 생성
    char **ar = (char**)malloc(sizeof(char*) *r);
    ar[0] = (char*)malloc(sizeof(char) *r*c);
    for(int i=1; i<r; i++) ar[i] = ar[i-1] +c;
    memset(ar[0], ' ', r*c); // 모든값을 ' '(공백)으로 설정해둔다.
    
    setdata(ar, r, c, n);
    printstar(ar, r, c);
    
    free(ar[0]);
    free(ar);
}