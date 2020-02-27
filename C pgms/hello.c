#include<stdio.h>
//simple program to display
void show(char a[])
{
printf("%s\n",a);
}

void main()
{
int i;
char a[]="mit mysore";
for(i=0;i<10;i++)
show(a);
}
