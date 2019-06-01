#ifndef WHATEVER_H_INCLUDED
#define WHATEVER_H_INCLUDED

struct stack{
    int size;
    int *stack;
    int counter;
};

struct queue{
    int size;
    int *queue;
    int counter;
    int head;
};

int initStack(struct stack *s);
int initQueue(struct queue *q);
int pushS(struct stack *s ,int indata);
int pushQ(struct queue *q ,int indata);
int pop(struct stack *s);
int deQ(struct queue *q);
void printS(struct stack *s);
void printQ(struct queue *q);

#endif