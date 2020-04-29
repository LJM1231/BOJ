#include <stdio.h>

char s[111];

int main(){
    while(scanf("%[^\n]\n", s) != EOF){
        printf("%s\n", s);
    }
}