//
// Created by 邓永隽 on 2018/5/18.
//


#include "stdio.h"
#include "stdlib.h"

/* queue
    first-in first-out

    list-queue: base on list
    static-queue: base on array
                  round-robin queue, mostly.

    round-robin queue:
        1. why round-robin?
        2. how many parameters need?
            2 paras, front & rear, diffenent meaning in different situation.
            1). queue init              ->  front = rear = 0
            2). queue not empty         ->  front represents the first element, rear represents the last valid element.
            3). queue empty             ->  front = rear, but not 0 always.
        3. how to traverse and edit?

            ***  rear = (rear + 1) % length of array  ***

        4. how to know if it's a empty queue?
            to check if front's value equals rear's value.

        5. how to know if it's a full queue?
            to check if front's value equals rear's value.

        6. how to separate an empty one from a full one?
            set a queue that not full: when we need n data, we set a n+1 length-queue.

 */


typedef struct Queue{
    int *pbase;
    int front;
    int rear;
}Queue, *pQueue;


void init(pQueue pq){
    pq->pbase = (int *)malloc(sizeof(int) * 6);
    pq->front = 0;
    pq->rear = 0;
}

int is_full_queue(pQueue pq){
    if ((pq->rear + 1) % 6 == pq->front) return 1;
    else return 0;
}

int is_empty_queue(pQueue pq){
    if (pq->front == pq->rear) return 0;
    else return 1;
}

void traverse_queue(pQueue pq){
    int i = pq->front;
    while (i != pq->rear){
        printf("%d  ", pq->pbase[i]);
        i = (i + 1) % 6;
    }
}


int in_queue(pQueue pq, int data) {
    if (is_full_queue(pq)) return 0;
    else{
        pq->pbase[pq->rear] = data;
        pq->rear = (pq->rear + 1) % 6;
        return 1;
    }
}

int out_queue(pQueue pq){
    if (is_empty_queue(pq)) return 0;
    else{
        pq->front = (pq->front + 1) % 6;
        return 1;
    }
}

int main(void){

}