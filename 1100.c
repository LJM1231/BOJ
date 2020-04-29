#include <stdio.h>
#include <string.h>

char arr[8][8];

int main(){
    int cnt=0;
    
    for(int i=0; i<8; i++){
        scanf("%s", arr[i]);
    }
    
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(arr[i][j]=='F'){
                if(i%2==0 && j%2==0) cnt++;
                else if(i%2==1 && j%2==1) cnt++;
            }
        }
    }
    
    printf("%d", cnt);
}