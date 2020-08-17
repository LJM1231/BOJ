#include <iostream>
#define MAX 10005

using namespace std;

int arr[MAX] = {0,1};

int main(){
    for(int i=2; i<=MAX; i++){
        for(int j=2; j*i<=MAX; j++){
            arr[i*j]=1;
        }
    }
    
    int T;
    scanf("%d", &T);
    
    while(T--){
        int input;
        scanf("%d", &input);
        
        for(int i=input/2; i>0; i--){
            if(arr[i]==0 && arr[input-i]==0){
                printf("%d %d\n", i, input-i);
                break;
            }
        }
    }
}