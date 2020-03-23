#include <stdio.h>
#include <string.h>

char d[6200][6200];

void copy(int h){ //h : 높이값
    int w = 2*h-1; //w : 너비값 계산
    for(int r=0; r<h; r++){
        memcpy(d[h+r], d[r], w); //1단계 작업
        memcpy(d[h+r]+(w+1), d[r], w); //2단계 작업
        memset(d[r], ' ', w); //3단계 작업
        memcpy(d[r]+(w+1)/2, d[h+r], w); //4단계 작업
    }
}

int main(){
    int w, h;
    scanf("%d", &h);
    w = 2*h -1;
    //전체 영역을 공백 데이터로 셋팅한다.
    for(int r=0; r<h; r++) memset(d[r], ' ', w);
    
    //초기 데이터를 셋팅한다
    d[0][2] = d[1][1] = d[1][3] = '*';
    for(int c=0; c<5; c++) d[2][c] = '*';
    
    //높이값 '3' 에서부터 차례로 증가시키면서 데이터 셋팅 작업을 진행시킨다.
    int line = 3;
    while(line < h){
        copy(line);
        line *= 2;
    }
    
    //셋팅 완료된 데이터를 '줄'별로 차례로 출력처리
    for(int r=0; r<2*h; r++) printf("%s\n", d[r]);
}