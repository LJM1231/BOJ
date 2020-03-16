#include <stdio.h>
#include <string.h>

#define MAX 80

int main(){
    int n;
    char OX[MAX];
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        int sum=0, score=1;
        
        scanf("%s", &OX);
        for(int j=0; j<strlen(OX); j++){
            if(OX[j] == 'O'){
                sum += score;
                score++;
            }
            if(OX[j] == 'X') score=1;
        }
        printf("%d\n", sum);
    }
}