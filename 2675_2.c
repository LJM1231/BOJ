#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        char w[21];
        char s[170]={0};
        scanf("%d %s", &n, w); //반복횟수와 반복에 사용될 단어을 읽는다
        
        int len=strlen(w), cur=0;
        for(int i=0; i<len; i++){
            //현재커서위치에서 단어속 문자값을 'n'바이트만큼 셋팅시킨다
            memset(s+cur, w[i], n);
            cur += n; //커서를 옮겨둔다
        }
        printf("%s\n", s);
    }
}