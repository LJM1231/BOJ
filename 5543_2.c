#include<stdio.h>

int a[3], b[2];

int main() {
    int i;
    for(i=0; i<3; i++) scanf("%d", &a[i]);
    for(i=0; i<2; i++) scanf("%d", &b[i]);
    
    int min =a[0]+b[0]-50;
    int set=0;
    
    for(i=0; i<3; i++){
        for(int j=0; j<2; j++){
            set = a[i]+b[j]-50;
            if(min>set) min = set;
        }
    }
    printf("%d\n", min);
}