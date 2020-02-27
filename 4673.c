#include<stdio.h>

int main(){
    int num;
    int temp, sum=0, sw=0;
    
    for(int i=1; i<=10000; i++){
        for(int j=1; j<i; j++){
            temp = j;
            if(sw == 1) break;
            
            if(temp<10){
                sum += temp+temp;
            }
            else if(temp<100){
                sum += temp+(temp/10)+(temp%10);
            }
            else if(temp<1000){
                sum += temp + (temp/100)+((temp%100)/10)+((temp%100)%10);
            }
            else if(temp<10000){
                sum += temp + (temp/1000)+((temp%1000)/100)+(((temp%1000)%100)/10) +(((temp%1000)%100)%10);
            }
            if(sum == i){
                sw = 1;
            }
            sum =0;
        }
        if(sw==0){
            printf("%d\n", i);
            sum = 0;
        }
        sw = 0;
    }
    return 0;
}