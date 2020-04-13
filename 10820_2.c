#include <stdio.h>
#include <string.h>

char s[101];
int n[4];

void analyze(){
    memset(n, 0, 4*4); //결과갑을 저장한 정수배열을 초기화
    
    int len=strlen(s);
    while(len--){
        //문자들의 종류에 따른 개수만 구하면 되기 때문에 문자배열에서 역순으로 진행해도 무방
        if(s[len] >= 'a' && s[len] <='z') n[0]++;
        else if(s[len] >= 'A' && s[len] <='Z') n[1]++;
        else if(s[len] >= '0' && s[len] <='9') n[2]++;
        else if(s[len] == 32) n[3]++;
    }
    
    for(int i=0; i<4; i++) printf("%d ", n[i]);
    printf("\n");
}

int main(){
    int cnt=0;
    
    //입력버퍼에서 꺼낼 수 있는 문자의 종류를 지정시킨다
    while(scanf("%[a-zA-Z0-9 ]", s) != EOF){
        getchar(); //개행문자(\n)를 입력버퍼에서 없앤다
        analyze();
    }
}