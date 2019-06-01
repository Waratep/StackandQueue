
#include <stdio.h>
#include "SandQ.h"


int main(){

    struct stack s;
    initStack(&s);

    for (size_t i = 0; i < 10; i++)
    {
        pushS(&s,i);
    }

    printf("Datas in stack = ");
    printS(&s);
    printf("\n");

    pop(&s);
    pop(&s);
    pop(&s);
    printf("Datas in stack = ");
    printS(&s);
    printf("\n");


    struct queue q;
    initQueue(&q);

    for (size_t i = 0; i < 10; i++)
    {
        pushQ(&q,i);
    }

    printf("Datas in queue = ");
    printQ(&q);
    printf("\n");

    deQ(&q);
    deQ(&q);
    deQ(&q);
    printf("Datas in queue = ");
    printQ(&q);

    return 0;
}