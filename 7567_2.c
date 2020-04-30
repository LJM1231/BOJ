#include <stdio.h>
#include <string.h>

int main(){
    char s[51];
    scanf("%s", s);
    int sum = 10, n=strlen(s);
    for(int i=1; i<n; i++){
        sum+= (s[i]==s[i-1]) ? 5:10;
    }
    printf("%d", sum);
}