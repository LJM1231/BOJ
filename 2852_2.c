#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int t[100], mm[100], ss[100]; //어느 t: 팀이, mm: 몇분에, ss: 몇초에 넣었는지
    for(int i=0; i<n; i++){
        scanf("%d %d:%d", &t[i], &mm[i], &ss[i]);
    }
    
    int tscr[2] = {0}; //팀스코어
    //m: 현재 시각(분)
    //s: 현재 시각(초)
    //winner: 이기고있는 팀
    //-1: 동점상황, 0:1번팀 이기는상황, 1:2번팀 이기는 상황
    int m=0, s=0, winner;
    
    //wm : 이기고있는 동안의 분
    //ws: 이기고 있는 동안의 초
    //wi: 입력값으로 읽은 배열 데이터의 인덱스
    int wm[2]={0}, ws[2]={0}, wi=0;
    for(; m<48; s++){
        winner = (tscr[0] == tscr[1]) ? -1 : (tscr[0] < tscr[1]);
        if(winner >= 0){
            if(++ws[winner] == 60) {ws[winner]=0; wm[winner]++; } //60초 이상시 분 증가
        }
        if(s==60) {s=0; m++;}
        if(m==mm[wi] && s==ss[wi]) tscr[t[wi++]-1]++;
    }
    printf("%02d:%02d\n", wm[0], ws[0]);
    printf("%02d:%02d\n", wm[1], ws[1]);
}