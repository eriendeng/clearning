//
// Created by 邓永隽 on 2018/5/30.
//

#include "stdlib.h"
#include "stdio.h"

 /*
    recursion
        1. must have a specific stop piont.
        2. the scale of data get smaller along the time.
        3.

    circulation vs. recursion
        recursion:
            easy to come across
            slow
            take up bigger space
        circulation:
            not easy to come across
            fast
            take up small space

  */


 int Factorial(int num){
     if (num == 1) return 1;
     else return num * Factorial(num - 1);
 }
 int HanoiTower(int num){
     return 1;
 }
 int maze(void){
     return 1;
 }
 int main(void){
     //Factorial
     printf("This is Factoreial:\n");
     printf("5 : %d\n",Factorial(5));
     printf("1 : %d\n\n",Factorial(1));
     return 1;

 }