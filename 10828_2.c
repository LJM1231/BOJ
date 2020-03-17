#include <stdio.h>
#include <string.h>
#define MAX_SIZE 10001

typedef struct {
    int items[MAX_SIZE];
    int top;
}Stack;

void InitStack(Stack *);
void Push(Stack*, int);
void Pop(Stack*);
int Empty(Stack*);
int Size(Stack*);
int Top(Stack*);

void InitStack(Stack *p){
    p->top = 0;
}

void Push(Stack *p, int v){
    p->items[++p->top] = v;
}

void Pop(Stack *p){
    p->top--;
}

int Empty(Stack *p){
    return (p->top == 0);
}

int Size(Stack *p){
    return (p->top);
}

int Top(Stack *p){
    return p->items[p->top];
}

int main(){
    int n;
    scanf("%d", &n);
    
    Stack s;
    InitStack(&s);
    
    while(n--){
        char input[6] = {0};
        scanf("%s", input);
        
        if(strcmp(input, "push")==0){
            int v;
            scanf("%d", &v);
            Push(&s, v);
        }
        else if(strcmp(input, "pop")==0){
            if(Empty(&s)) printf("%d\n", -1);
            else{
                printf("%d\n", Top(&s));
                Pop(&s);
            }
        }
        else if(strcmp(input, "top")==0){
            if(Empty(&s)) printf("%d\n", -1);
            else {
                printf("%d\n", Top(&s));
            }
        }
        else if(strcmp(input, "size")==0){
            printf("%d\n", Size(&s));
        }
        else if(strcmp(input, "empty")==0){
            printf("%d\n", Empty(&s));
        }
    }
}