//
// Created by 邓永隽 on 2018/6/2.
//

#include "memory.h"
#include "stdlib.h"
#include "stdio.h"


/*
struct Date{
    int year;
    int month;
    int day;
};
struct Detail{
    char name[10];
    struct Date birth;
};

struct studentNode{
    char name[10];
    struct Date birth;
    struct studentNode *next;
};


struct studentNode* CreateLinkList(void){
    struct studentNode *phead = (struct studentNode*)malloc(sizeof(struct studentNode));
    strcpy(phead->name,"init");
    return phead;
}

void AddStudent(struct studentNode *phead, struct Detail *detail){
    struct studentNode *p = phead;
    while (p->next != NULL) p = p->next;
    p->next = (struct studentNode*)malloc(sizeof(struct studentNode));
    p = p->next;
    strcpy(p->name, detail->name);
    p->birth = detail->birth;
    p->next = NULL;
    return;
}

void Traverse(struct studentNode *phead){
    int i = 1;
    struct studentNode *p = phead;
    p = p->next;
    while (p->next != NULL){
        printf("%d.\n", i);
        printf("  name  ：  %s\n", p->name);
        printf("  birth :   %d.%d.%d\n",p->birth.year,p->birth.month,p->birth.day);
        i++;
    }
}

int main(void){
    struct Detail student1 = {"zhangsan",{2000,1,1}};
    struct Detail student2 = {"libai",{1999,12,4}};
    struct Detail student3 = {"heizi",{2011,8,8}};

    struct studentNode *phead = CreateLinkList();
    AddStudent(phead, &student1);
    AddStudent(phead, &student2);
    Traverse(phead);

    AddStudent(phead, &student3);
    Traverse(phead);

    return 1;
}

*/


