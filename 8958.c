#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    
    char s[80];
    for(int i=0; i<t; i++){
        int sum=0, check=1;
        scanf("%s", s);
        
        for(int j=0; j<strlen(s); j++){
            if(s[j]=='O') {
                sum+=check;
                check++;
            }
            if(s[j]=='X')
                check=1;
        }
        printf("%d\n", sum);
    }
}