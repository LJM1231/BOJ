#include <stdio.h>
#include <string.h>

char n1[20], n2[20]; //합친 2개의 숫자 문자열을 위해 구성

long long stoll(char *p){
    int n=strlen(p); //숫자 문자열의 길이를 구한다
    long long res=0, v=1;
    while(n--){
        res += v*(p[n]-'0'); //숫자를 차근차근 만든다
        v *= 10;
    }
    return res; //long long 값 반환
}

int main(){
    int n=2;
    char num[10];
    while(n--){
        scanf("%s", num);
        strcat(n1, num); //읽은 숫자 문자열 합치기
    }
    n=2;
    while(n--){
        scanf("%s", num);
        strcat(n2, num);
    }
    printf("%lld\n", stoll(n1) +stoll(n2));
}