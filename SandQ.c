#include "SandQ.h"
#include <stdio.h>
#include <stdlib.h>


int initStack(struct stack *s){

    s->size = 10;
    s->counter = 0;
    s->stack = malloc(s->size);
}

int initQueue(struct queue *q){

    q->size = 10;
    q->counter = 0;
    q->head = 0;
    q->queue = malloc(q->size);
}

int pushS(struct stack *s ,int indata){

    if (s->counter + 2 <= s->size){
        s->size += 10;
        int *buffer = realloc(s->stack,s->size);
        s->stack = buffer;

    }

    if (s->counter < 10){
        *(s->stack + s->counter) = indata;
    }else{
        printf("Out of stack!");
    }
    s->counter++;;

}

int pushQ(struct queue *q ,int indata){

    if (q->counter + 2 <= q->size){
        q->size += 10;
        int *buffer = realloc(q->queue,q->size);
        q->queue = buffer;

    }

    if (q->counter < 10){
        *(q->queue + q->counter) = indata;
    }else{
        printf("Out of Queue!");
    }
    q->counter++;;

}

int pop(struct stack *s){
    int data = (int)(s + s->counter);
    s->counter--;
    return data;
}

int deQ(struct queue *q){
    int data = (int)(q + q->head);
    q->head++;
    return data;
}

void printS(struct stack *s){
    for(int i = 0 ; i < s->counter ; i++){
        printf("%d ",*(s->stack + i));
    }    
}

void printQ(struct queue *q){
    for(int i = q->head ; i < q->counter ; i++){
        printf("%d ",*(q->queue + i));
    }    
}

