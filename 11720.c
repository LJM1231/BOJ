#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    
    char s[n];
    scanf("%s", s);
    
    int sum=0;
    while(n--){
        sum+=s[n]-'0';
    }
    printf("%d", sum);
}