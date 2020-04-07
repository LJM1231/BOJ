#include <stdio.h>

double arr[1000];
int main(){
    int n, max=0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%lf", &arr[i]);
        if(max<arr[i]) max=arr[i];
    }
    
    double sum=0;
    for(int i=0; i<n; i++){
        sum += (arr[i]/max)*100;
    }
    printf("%lf", sum/n);
    return 0;
}