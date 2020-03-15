#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
	int *arr;
	int maxLength;
	int length; 
}queue;

queue* newQueue(int maxLength){
	queue* temp = (queue *)malloc(sizeof(queue));
	temp->arr = (int *)malloc(sizeof(int) * maxLength);
	temp->maxLength = maxLength;
	temp->length = 0;
	return temp;
} 

int delQueue(queue *q){
	if(q->arr && q->maxLength){
		free(q->arr);
		free(q);
		return 1;
	}
	return 0;
} 

int push(queue* q, int value){
	if(q->maxLength <= q->length){
		q->maxLength *= 2;
		int *arr = (int *)malloc(sizeof(int) * q->maxLength);
		for(int i = 0 ; i < q->length;++i){
			arr[i] = q->arr[i];
		}
		free(q->arr);
		q->arr = arr;
	}
	q->arr[q->length++] = value;
	return 1;
} 

int pop(queue* q){
	if(q->length < 1){
		return -1;
	}else{
		int ret = q->arr[0];
		for(int i = 1; i < q->length;++i){
			q->arr[i-1] = q->arr[i];
		}
		q->length--;
		return ret;
	}
} 

int size(queue* q){
	return q->length;
} 

int empty(queue* q){
	return q->length == 0;
} 

int front(queue* q){
	if(!q->length){
		return -1;
	}
	return q->arr[0];
} 

int back(queue* q){
	if(!q->length){
		return -1;
	}
	return q->arr[q->length-1];
}

int main(void){
	queue* q = newQueue(10);
	
	int N,num;
	char str[6];
	scanf("%d", &N);
	
	while(N--){
		scanf("%s", str);
		
		if(!strcmp(str, "push")){
		    scanf("%d", &num);
		    push(q, num);
		}
		else if(!strcmp(str, "pop")) printf("%d\n", pop(q));
		else if(!strcmp(str, "size")) printf("%d\n", size(q));
		else if(!strcmp(str, "empty")) printf("%d\n", empty(q));
		else if(!strcmp(str, "front")) printf("%d\n", front(q));
		else if(!strcmp(str, "back")) printf("%d\n", back(q));
		
	}
	delQueue(q);
	return 0;
}