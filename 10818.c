#include <stdio.h>
#define MAX 1000000

int main(){
    int n, max=-MAX, min=MAX;
    int arr[MAX];
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        
        if(max<arr[i]) max=arr[i];
        if(min>arr[i]) min=arr[i];
    }
    printf("%d %d", min, max);
    
    return 0;
}