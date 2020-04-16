#include <stdio.h>
#include <string.h>

int cnt[26];
int main(){
    char s[1000001];
    scanf("%s", s);
    
    int n=strlen(s), idx, max=0, res=0;
    while(n--){ 
        if(s[n]>='A' && s[n]<='Z') idx=s[n]-'A';
        else if(s[n]>='a' && s[n]<='z') idx = s[n]-'a';
        
        ++cnt[idx];
        if(max<cnt[idx]){
            max=cnt[idx]; //최대값 갱신
            res = idx; //최대값 알파벳 지정
        }
        else if(max==cnt[idx]){
            res=63; //최대값이 겹치는 상황 '?'문자값으로 결과값 지정
        }
    }
    //?이면 그대로 출력, 아니면 알파벳 출력
    printf("%c", (res==63) ? res:'A'+res);
}