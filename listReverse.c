//
// Created by 邓永隽 on 2018/6/2.
//

#include <printf.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct List{
    int data;
    struct List *pnext;
}list,*plist;

plist init(){
    plist pl = (plist)malloc(sizeof(struct List));
    pl->pnext = NULL;
    return pl;
}

void add(plist pl, int data){
    plist p = pl;
    while (p->pnext != NULL) p = p->pnext;
    p->pnext = (plist)malloc(sizeof(struct List));
    p->pnext->data = data;
    p->pnext->pnext = NULL;
}

void sort(plist pl){
    plist p = pl;
    plist tmp;
    plist tmp2;
    int i = 0;
    while(p->pnext != NULL){
        i++;
        p = p->pnext;
    }
    p = pl;
    for (int j = 0; j < i; j++){
        while (p->pnext->pnext != NULL){
            if (p->pnext->data < p->pnext->pnext->data){
                tmp = p->pnext->pnext->pnext;
                tmp2 = p->pnext;
                p->pnext = p->pnext->pnext;
                p->pnext->pnext = tmp2;
                p->pnext->pnext->pnext = tmp;
            }
        }
    }
}

void traverse(plist pl){
    plist p = pl->pnext;
    while (p->pnext != NULL){
        printf("%d ",p->data);
        p = p->pnext;
    }
}

int main(){
    plist pl = init();
    add(pl, 55);
    add(pl, 24);
    add(pl, 95);
    add(pl, 44);
    add(pl, 100);
    traverse(pl);

    sort(pl);
    traverse(pl);

    return 1;
}