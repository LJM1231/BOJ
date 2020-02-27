#include <stdio.h>

int main(void){
    int a[8];
    int asc=0, des=0;
    
    for(int i=0; i<8; i++){
       scanf("%d", &a[i]);
    }
    
    for(int i=0; i<8; i++){
        if(a[i]==i+1) asc++;
        else if(a[i] == 8-i) des++;
    }
    
    if(asc==8) printf("ascending");
    else if(des==8) printf("descending");
    else printf("mixed");
    return 0;
}