#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10001

typedef struct _stack{
    int arr[MAX_SIZE];
    int top;
}Stack;

void StackInit(Stack *sp){
    sp->top = -1;
}

int Empty(Stack *sp){
    if(sp->top == -1) return 1;
    else return 0;
}

int Size(Stack *sp){
    return sp->top+1;
}

int Full(Stack *sp){
    if(sp->top+1 >= MAX_SIZE) return 1;
    else return 0;
}

void Push(Stack *sp, int data){
    if(Full(sp)==1) return;
    else sp->arr[++(sp->top)]=data;
}

int Pop(Stack *sp){
    if(Empty(sp) == 1) return -1;
    else return sp->arr[(sp->top)--];
}

int Top(Stack *sp){
    if(Empty(sp) == 1) return -1;
    else return sp->arr[sp->top];
}

int main(){
    int N, num;
    char str[6];
    Stack stack;
    
    scanf("%d", &N);
    StackInit(&stack);
    
    for(int i=0; i<N; i++){
        scanf("%s", &str);
        
        if(!strcmp(str, "push")){
            scanf("%d", &num);
            Push(&stack, num);
        }
        else if(!strcmp(str, "pop")){
            printf("%d\n", Pop(&stack));
        }
        else if(!strcmp(str, "empty")){
            printf("%d\n", Empty(&stack));
        }
        else if(!strcmp(str, "size")){
            printf("%d\n", Size(&stack));
        }
        else if(!strcmp(str, "top")){
            printf("%d\n", Top(&stack));
        }
    }
    return 0;
}