#include <stdio.h>
#include <string.h>

char s[101];

int stoi(char *p){//문자배열의 값을 읽어서 정수로 변환
    int n=strlen(p);
    int res=0, v=1;
    while(n--){
        res += v*(p[n]-'0');
        v*=10;
    }
    return res;
}

int main(){
    scanf("%s", s);
    
    int n=strlen(s);
    char *p=strtok(s, ",");
    int sum=stoi(p);
    
    while((p = strtok(NULL, ",")) != NULL){
        sum += stoi(p);
    }
    printf("%d\n", sum);
}