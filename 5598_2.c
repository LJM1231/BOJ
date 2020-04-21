#include <stdio.h>
#include <string.h>

int main(){
    char s[1001];
    scanf("%s", s);
    
    int n=strlen(s);
    //카이사르 암호규칙에 따라 각각의 문자를 원래의 문자로 변환처리
    while(n--) s[n]='A'+(s[n]-'A'+23) %26;
    printf("%s", s);
}