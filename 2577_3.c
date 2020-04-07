#include <stdio.h>

int arr[10];

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int res=a*b*c;
    
    int tmp;
    while(res>0){
        tmp=res%10;
        arr[tmp]++;
        res/=10;
    }
    for(int i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
}