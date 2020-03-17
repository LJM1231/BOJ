#include <stdio.h>
#include <string.h>
#define MAX_SIZE 10001

typedef struct {
    int items[MAX_SIZE];
    int front, rear;
}Queue;

void Init(Queue *);
void Push(Queue *, int);
int Pop(Queue *);
int Empty(Queue *);
int Front(Queue *);
int Rear(Queue *);
int Size(Queue *);

void Init(Queue *q){
    q->front = q->rear = 0;
}

void Push(Queue *q, int v){
    q->items[q->rear] = v;
    q->rear = (q->rear+1) % MAX_SIZE;
}

int Pop(Queue *q){
    if(Empty(q)) return -1;
    
    int res = q->items[q->front];
    q->front = (q->front+1) % MAX_SIZE;
    return res;
}

int Size(Queue *q){
    return (q->rear >= q->front) ? (q->rear - q->front) : (MAX_SIZE + q->rear - q->front);
}

int Empty(Queue *q){
    return (q->front == q->rear);
}

int Front(Queue *q){
    if(Empty(q)) return -1;
    return q->items[q->front];
}

int Back(Queue *q){
    if(Empty(q)) return -1;
    return q->items[q->rear-1];
}


int main(){
    Queue q;
    Init(&q);
    
    int n;
    scanf("%d", &n);
    
    while(n--){
        char input[6];
        scanf("%s", input);
        
        if(strcmp(input, "push")==0){
            int v;
            scanf("%d", &v);
            Push(&q, v);
        }
        else if(strcmp(input, "pop")==0) printf("%d\n", Pop(&q));
        else if(strcmp(input, "size")==0) printf("%d\n", Size(&q));
        else if(strcmp(input, "empty")==0) printf("%d\n", Empty(&q));
        else if(strcmp(input, "front")==0) printf("%d\n", Front(&q));
        else if(strcmp(input, "back")==0) printf("%d\n", Back(&q));
    }
}