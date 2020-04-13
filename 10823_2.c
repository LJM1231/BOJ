#include <stdio.h>
#include <string.h>

char s[10001];

int stoi(char *p){
    int n=strlen(p);
    int res=0, v=1;
    while(n--){
        res += v*(p[n]-'0');
        v*=10;
    }
    return res;
}

int main(){
    char line[10001];
    while(scanf("%s", line) != EOF){
        strcat(s,line); //이어서 붙임
    }
    
    int n=strlen(s);
    char *p=strtok(s, ",");
    int sum = stoi(p);
    
    while((p=strtok(NULL, ",")) != NULL){
        sum += stoi(p);
    }
    printf("%d\n", sum);
}