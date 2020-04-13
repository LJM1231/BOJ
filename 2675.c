#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    
    int r;
    char s[21];
    while(t--){
        scanf("%d", &r);
        scanf("%s", s);
        for(int i=0; i<strlen(s); i++){
            for(int j=0; j<r; j++){
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}