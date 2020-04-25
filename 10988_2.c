#include <stdio.h>
#include <string.h>

int main(){
    char s[101];
    scanf("%s", s);
    
    int len=strlen(s);
    int res=1;
    for(int i=0; i<len/2; i++){
        //앞과 뒤에서 동시에 탐색 진행
        if(s[i] != s[len-1-i]) {res=0; break;}
    }
    printf("%d", res);
}