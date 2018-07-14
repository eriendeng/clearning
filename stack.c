
// Created by 邓永隽 on 2018/5/16.
//

#include "stdbool.h"
#include "stdio.h"
#include "stdlib.h"


/*stack

  a first-in-last-out mode to load data (like a bucket with water)
  base on array mode, a linear edit mode.
  we need to delete all the element inserted later when we need to delete an element.

  classic：
    static & dynamic (length)

  operation:
    in & out

  usage:
    call of function

*/

typedef struct Node{
    int data;
    struct Node * pnext;
}node, *pnode;

typedef struct Stack{
    pnode ptop;
    pnode pbottom;
}stack, *pstack;

/*
typedef struct Stack2{
    int * data;
    int top;
    int size;
    int increment;
}stack2, *pstack2;
*/


void stack_init(pstack p){
    p->ptop = (pnode)malloc(sizeof(node));
    p->pbottom = p->ptop;
    p->ptop->pnext = NULL;
};

bool stack_is_empty(pstack p){
    if (p->ptop == p->pbottom) return true;
    else return false;
}

void stack_push(pstack p, int data){
    pnode pnew = (pnode)malloc(sizeof(node));
    pnew->data = data;
    pnew->pnext = p->ptop;
    p->ptop = pnew;
    return;
}

bool stack_pop(pstack p, int *val){
    if (stack_is_empty(p)) return false;
    else{
        pnode r = p->ptop;
        *val = r->data;
        p->ptop = r->pnext;
        free(r);
        r = NULL;
        return true;
    }
}

void stack_traverse(pstack p){
    pnode pt = p->ptop;
    while (pt != p->pbottom){
        printf("%d  ",pt->data);
        pt = pt->pnext;
    }
    printf("\n");
    return;
}

void stack_clear(pstack p){
    if (stack_is_empty(p))return;
    else{
        pnode q = p->ptop;
        pnode r = NULL;
        while  (q != p->pbottom){
            r = q->pnext;
            free(q);
            q = r;
        }
        p->ptop = p->pbottom;
    }
    return;
};

int main(void){
    stack s;
    stack_init(&s);
    return 0;
}