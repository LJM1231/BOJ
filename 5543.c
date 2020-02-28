#include<stdio.h>

int main() {
    int a[3], min=2000;
    int b1, b2, min2;
    
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &b1, &b2);
    
    for(int i=0; i<3; i++){
        if(min>a[i]) min=a[i];
    }
    
    if(b1<b2) min2=b1;
    else min2=b2;
    
    int sum=min+min2;
    
    printf("%d", sum-50);
    
}