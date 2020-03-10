#include<stdio.h>
//#include"date.c"
#include"date.h"

void main()
{
    struct date d;
    d.d=03;
    d.m=03;
    d.y=1990;
    show(&d);
}
