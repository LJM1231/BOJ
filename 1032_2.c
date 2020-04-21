#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    
    char res[51]={0};
    int size=n;
    while(n--){
        char s[51];
        scanf("%s", s);
        int len = strlen(s);
        
        //첫번째로 주어지는 문자열을 '결과문자열'에 복사
        if(n==size-1) strcpy(res, s);
        else{
            while(len--){
                //한번이라고 틀리면 '?'문자로 바꿈
                if(res[len]!=s[len]) res[len]='?';
            }
        }
    }
    printf("%s", res);
}