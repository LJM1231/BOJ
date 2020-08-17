#include <iostream>

using namespace std;

int arr[1000000]={0,1};

int main(){
    int input;
    while(1){
        int cnt=0;
        scanf("%d", &input);
        
        if(input==0) break;
        else if(input==1) printf("1\n");
        else{
            for(int i=2; i<=(2*input); i++){
                for(int j=2; (j*i)<=(2*input); j++){
                    arr[i*j]=1;
                }
            }
            
            for(int i=input+1; i<=2*input; i++){
                if(arr[i]==0) cnt++;
            }
            printf("%d\n", cnt);
        }
    }
}