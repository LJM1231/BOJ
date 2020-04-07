#include <stdio.h>

int r[2][3]; //2:성별, 3:학년

int main(){
    int n, k; //k:한방의 최대인원
    scanf("%d %d", &n, &k);
    
    while(n--){
        int s,g; //s:성별, g:학년
        scanf("%d %d", &s, &g);
        r[s][(g-1)/2]++; //학년값은 '0'부터 시작하기 때문에 인덱스를 보정한다
    }
    
    int cnt=0, sum=0;
    //학년 증가
    for(int g=0; g<=2; g++){
        //성별탐색
        for(int s=0; s<=1; s++){
            if(g==0) { //1,2학년 상황
                cnt = r[s][g]+r[s+1][g];
                if(cnt>0) sum+=1 + (cnt-1)/k;
                break; //성별상관없이 처리하고 루프탈출
            }
            else { //나머지 학년 처리
                cnt = r[s][g];
                if(cnt>0) sum+= 1+(cnt-1)/k;
            }
        }
    }
    printf("%d", sum);
}