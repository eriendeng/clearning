//
// Created by 邓永隽 on 2018/5/15.
//

# include "stdlib.h"
#include "stdio.h"
#include "printf.h"

/*
 list:

 advantage:
  no space limit.
  fast to insert elements.
 disadvantage:
  slow to read and write.

  some scatter points
  connect by pointer
  one point before or after a point most

  head node     //head node's pointer points to first node,
                  which name head pointer
  tail node     //head node has no valid static
  first node    //head node provides convenience when during with the list

  head pointer  //points to head node
  first pointer //points to first node
  tail pointer  //points to tail node

  if we need to due with a list, we just need the head pointer
*/

/*typedef

 struct Student{
    int sid;
    char name[20];
    int sex;
 };

 **the same as**

 typedef struct Student{
    int sid;
    char name[20];
    int sex;
 }* pst,st;

 int main(void){
    pst zhangsan;
    //or
    Struct Student *zhangsan;

    ////

    st lisi;
    //or
    Struct Student lisi;
 }
*/

typedef struct List{
    /*
     data
     */
    int i;
    struct List *pnext;
}node, *pnode;

//needn't
pnode createList(void){
    return malloc(sizeof(pnode));
};

void add_node(pnode phead){
    pnode p = phead;
    while(p->pnext != NULL) p = p->pnext;
    p->pnext = malloc(sizeof(pnode));
};

void traverse_list(pnode phead){
    pnode p = phead;
    //question: while loop list?check id?
    while (p->pnext != NULL){
        printf("%d,",p->i);
        p = p->pnext;
    }
    printf("\n");
};

void insert(struct List *newpt, struct List *oldpt){
    pnode r = oldpt->pnext;
    oldpt->pnext = newpt;
    newpt->pnext = r;
}

void delete(struct List *phead, int index){
    int i = 0;
    pnode pt = phead;
    while (pt->pnext == NULL && i < index-1){
        pt = pt->pnext;
        ++i;
    }
    pnode q = pt->pnext;
    free(q);
    return;
}



int main(void){
    pnode phead = createList();
    add_node(phead);

    return 0;
}