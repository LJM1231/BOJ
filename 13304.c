#include <stdio.h>

int n, k, s, y;
int arr[5];
//arr[0]=1,2학년
//arr[1]=3,4학년 남
//arr[2]=3,4학년 여
//arr[3]=5,6학년 남
//arr[4]=5,6학년 여

int main(){
    scanf("%d %d", &n, &k);
    
    while(n--){
        scanf("%d %d", &s, &y); //s성별(0여, 1남), y학년
        if(y<3)  arr[0]++; //1-2학년
        else if(y<5){ //3-4학년
            if(s==1) arr[1]++;
            else arr[2]++;
        }
        else{ //5-6학년
            if(s==1) arr[3]++;
            else arr[4]++;
        }
    }
    
    for(s=0, y=0; s<5; s++)
        y+=arr[s] / k+(arr[s]%k ? 1:0);
    printf("%d", y);
}