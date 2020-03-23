#include <stdio.h>
#include <string.h>

char space = ' ';
char d[2050][2050]; //result data
char b[2050][2050]; //backup buffer
//current width, height and old width, height
int w, h, ow, oh;

void backup(){
    //current dataset을 backup buffer에 그대로 복사해둔다
    for(int r=0; r<h; r++) memcpy(b[r], d[r], w);
    ow=w; //backup용 width
    oh = h; //backup용 height
}

void copy(int step){
    //backup buffer에 있는 데이터를 result dataset에 복사시킨다
    //result dataset에서 붙여넣기를 해야할 위치를 잡는다
    //sr : start row
    //sc : start column
    int sr = (step%2==1) ? oh:1;
    int sc = oh+1;
    for(int r=0; r<oh; r++) memcpy(d[r+sr]+sc, b[r], ow);
}

void set(int step){
    int r, lc = 0, rc= w-1;
    for(r=0; r<h; r++) memset(d[r], space, w);
    if(step % 2 == 0){
        memset(d[0], '*', w);
        for(r=1; r<h; r++) d[r][++lc] = d[r][--rc] = '*';
        copy(step); // 단계별로 백업된 데이터를 붙여넣기 한다
    }
    else {
        memset(d[h-1], '*', w);
        for(r=h-2; r>=0; r--) d[r][++lc] = d[r][--rc] = '*';
        if(step>1) copy(step); //단계별로 백업된 데이터를 붙여넣기 한다
    }
    //현재까지 만들어진 결과 데이터를 백업시킨다
    backup();
}

int main(){
    int n;
    scanf("%d", &n);
    
    //첫번째 단계 처리
    w=h=1;
    int step = 1;
    set(step++);
    
    //단계를 목표단계까지 높여가면서 빌드업 해 나간다.
    for(int i=1; i<n; i++){
        w+= 2*(h+1); h+=(h+1);
        set(step++);
    }
    
    //printf함수에서 '%s' 출력처리시에 '\0' 문자까지 출력된다
    //현재 문제에서 우측 공백은 없는 상태이다. 출력양싱에러를 방지하기 위해서
    //마지막 '*'이 있는 데이터 다음 데이터를 '\0'(정수값:0) 문자로 교체시킨다.
    if(n%2==1) {for(int r=h-1; r>=0; r--) d[r][w--] = 0;}
    else {for(int r=0; r<h; r++) d[r][w--] = 0;}
    
    //행의 주소별로 출력처리를 한다
    for(int r=0; r<h; r++) printf("%s\n", d[r]);
}