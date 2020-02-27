#include<stdio.h>
//simple program to display
void swap(int *x, int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

void main()
{
int a=10,b=89;
printf("before swap a=%d,b=%d\n",a,b);
swap(&a,&b);
printf("after swap a=%d,b=%d\n",a,b);
}
