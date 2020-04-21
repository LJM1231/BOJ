#include <stdio.h>
#include <string.h>

//크로아티아 알파벳 8개 구성
char a[8][4]={"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

int check(char *c, int pos){
    //pos위치에서 크로아티아 알파벳 길이만큼 문자열 비교를 한다
    //만약 일치하면 크로아티아 알파벳이므로 1글자로 처리되도록 반환값을 길이값으로 구성
    
    int len=0;
    for(int i=0; i<8; i++){
        len = strlen(a[i]);
        if(memcmp(c+pos, a[i], len) == 0) return len;
    }
    
    //크로아티아 알파벳이 아니므로 일반알파벳으로 처리되도록 반환값 구성
    return 1;
}

int main(){
    char c[100];
    scanf("%s", c);
    
    int cnt=0;
    for(int i=0; i<strlen(c); ) {
        cnt++;
        i += check(c, i); //함수에서 반환된 값만큼 커서를 이동시킨다
    }
    printf("%d", cnt);
}