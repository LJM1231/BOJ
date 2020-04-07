#include <stdio.h>

int arr[42];

int main(){
    int num;
    int cnt=0;
    
    for(int i=0; i<10; i++){
        scanf("%d", &num);
        arr[num%42]++;
    }
    for(int i=0; i<42; i++){
        if(arr[i] != 0) cnt++;
    }
    printf("%d", cnt);
}