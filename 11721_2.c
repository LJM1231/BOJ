#include <stdio.h>
#include <string.h>

int main(){
    char t[100];
    scanf("%s", t);
    
    for(int i=0; i<sizeof(t); i++){
        if(t[i]==0) break;
        printf("%c", t[i]);
        if(i%10==9) printf("\n");
    }
}