#include <stdio.h>

int arr[9];

int main(){
    int max=0;
    int a=0;
    for(int i=0; i<9; i++){
        scanf("%d", &arr[i]);
        
        if(max<arr[i]){
            max=arr[i];
            a=i+1;
        }
    }
    printf("%d\n", max);
    printf("%d", a);
}