#include <stdio.h>
#include <string.h>

char d[2200][2200];

void copy(int n, int x, int y){
    //n : 영역의 크기, size
    //x : 붙여넣기를 할 9 영역중에서 수평단계 (0~2)
    //y : 붙여넣기를 할 9 영역중에서 수직 단계 (0~2)
    for(int r=0; r<n; r++){
        //9영역 중, 중앙영역인 (1,1) 영역은 모두 공백으로 데이터를 설정한다
        if(x==1 && y==1) memset(d[y*n +r] + n*x, ' ', n);
        //그 외의 영역은 모드 좌상단 영역의 데이터를 복사시킨다.
        else memcpy(d[y*n+r] + n*x, d[r], n);
    }
}

int main(){
    int e;
    scanf("%d", &e);
    
    d[0][0] = '*'; //첫번째 좌상단 데이터
    int n = 1; //크기를 점점 키워나간다
    while(n<e){
        //(0,0)부터 (2,2) 영역까지 데이터의 copy & paste 반복 수행
        for(int r=0; r<3; r++){
            for(int c=0; c<3; c++){
                if(r==0 && c==0) continue; //좌상단 영역을 skip
                copy(n, c, r);
            }
        }
        n *= 3;
    }
    for(int i=0; i<e; i++) printf("%s\n", d[i]);
}