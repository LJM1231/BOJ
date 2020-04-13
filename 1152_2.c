#include <stdio.h>

char s[1000000];

int main(){
    int cnt=0;
    while(scanf("%s", s) != EOF){
        //단어를 1개 읽기 성공:  EOF(-1)가 아닌 값이 반환됨
        cnt++;
    }
    printf("%d\n", cnt);
}