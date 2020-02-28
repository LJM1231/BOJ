#include<stdio.h>

int s[1001];

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--){
        int all;
        scanf("%d", &all);
        
        int n=all, sum=0;
        while(n--){
            scanf("%d", &s[n]);
            sum += s[n]; //총합구하기
        }
        
        double avg = (double)sum/all;  //평균값
        int ans = 0;
        n=all;
        while(n--) {
            if(s[n]>avg) ans++; //평균보다 높은 학생 수
        }
        printf("%.3f%c\n", (double)ans*100/all, '%');
    }
}