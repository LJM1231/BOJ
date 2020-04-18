#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    char ans[50];
    
    scanf("%d", &n);
    char **str = (char**)malloc(sizeof(char*)*n);
    
    for(int i=0; i<n; i++){
        str[i]=(char*)malloc(sizeof(char)*50);
    }
    
    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }
    for(int j=0; str[0][j]!='\0'; j++){
        ans[j]=str[0][j];
    }
    
    for(int j=0; j<strlen(ans); j++){
        for(int i=1; i<n; i++){
            if(str[i][j]!=str[i-1][j]){
                ans[j]='?';
                break;
            }
            else ans[j]=str[i][j];
        }
    }
    printf("%s", ans);
    return 0;
}