#include <stdio.h>
#define SIZE 5

void InputNumbers(int num[], int len){
    int v;
    for(int i=0; i<len; i++){
        scanf("%d", &v);
        num[i] = v;
    }
}

double computeAverage(int num[], int len){
    int sum=0;
    for(int i=0; i<len; i++){
        sum += num[i];
    }
    return (double)sum/len;
}

int main(){
    int numbers[SIZE];
    InputNumbers(numbers, SIZE);
    printf("average: %.3lf\n", computeAverage(numbers, SIZE));
    
    return 0;
}