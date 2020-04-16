#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int res=0;
    while(n--){
        char s[101], cnt[26] = {0};
        scanf("%s", s);
        int len=strlen(s), isgroup=1, curridx=0;
        while(len--){ //연결상황만 확인하기 때문에 역순으로 진행해도 무방
            int idx=s[len]-'a'; //현재문자확인
            if(cnt[idx] == 0 || idx==curridx){
                //처음 나온 문자이거나, 계속 연결되어 나온 문자인 상황
                cnt[idx]=1;
                curridx=idx;
            }
            else {
                //그룹단어 깨짐
                isgroup=0;
                break; // 더 이상 체크할 필요없음. 루프 breaking
            }
        }
        if(isgroup) res++;
    }
    printf("%d", res);
}