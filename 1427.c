#include <stdio.h>

#define swap(a, b){int t; t = a; a = b; b = t;}

int SSort(char *ar, int num){
    int max = 0;
    int index;
    for(int i = 0; i < num-1; i++){
         max = 0;
         index = i; 
        for(int j = i; j < num; j++){
            if(max < ar[j]){
                max = ar[j];
                index = j;
            }
        }
        swap(ar[i], ar[index]);
    }
}

int main(){
    int i, len;
    char ar[11] = {0,};
    scanf("%s", ar);
    
    for(i = 0; ar[i] != '\0'; i++){;}
    len = i;
    
    SSort(ar, len);
    for(i = 0; i < len; i++){
        printf("%c", ar[i]);
    }
}