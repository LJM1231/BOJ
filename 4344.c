#include<stdio.h>

int main() {
    int c, n;
    
    scanf("%d", &c);
    
    while(c--){
        
        int score[1000]={0};
        int sum=0, cnt=0;
        double ave=0.0;
    
        scanf("%d", &n);
        
        for(int i=0; i<n; i++){
            scanf("%d", &score[i]);
            sum += score[i];
        }
        ave = (double)sum / n;
        
        for(int i=0; i<n; i++){
            if(ave<score[i]){
                cnt++;
            }
        }
        printf("%.3lf%%\n", (double)cnt*100 / n);
    }
    return 0;
}
