#include <stdio.h>

int main(void){
    int n;
    double max=0, ave=0;
    
    scanf("%d", &n);
    double a[n];
    
    for(int i=0; i<n; i++){
        scanf("%lf", &a[i]);
        if(max<a[i]) max=a[i];
    }
    for(int i=0; i<n; i++){
        a[i] = a[i]/max*100.0;
        ave += a[i];
    }
    
    printf("%lf", ave/n);
    return 0;
}