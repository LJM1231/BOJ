#include <stdio.h>
#define MAX 1000000

int arr[MAX];
int main(){
    int n;
    int max=-MAX;
    int min=MAX;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        
        if(max<arr[i]) max=arr[i];
        if(min>arr[i]) min=arr[i];
    }
    printf("%d %d", min, max);
}