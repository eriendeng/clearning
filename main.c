#include <stdio.h>
#include <memory.h>

struct Student{
    int sid;
    char name[20];
    int age;
    int grade;
};



int main() {
    void f();
    struct Student lee = {1,"lee",20,89};
    struct Student tom;
    struct Student *amy;
    /*
     tom.grade tom结构体中的grade变量
     amy->grade amy指针所指向的机构提变量中的grade成员变量
     */

    tom.grade = 86;

    printf("%d\n",tom.grade);
    f(amy);
    printf("%d,%d,%d\n",(*amy).sid,(*amy).age,(*amy).grade);
    printf("Hello, World!\n");
    return 0;
}

void f(struct Student *pt){
    (*pt).sid = 0;
    //name是数组名字，是指向这个数组第一位的指针，不能直接赋值，赋值需要用strcpy
    strcpy(pt->name,"unknown");
    pt->age = 0;
    pt->grade = 0;
}