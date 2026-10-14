#include<stdio.h>
int main()
{

int age=22;
int*ptr=&age;// for print all ptr value
int _age=*ptr;
printf("age is:%d\n",age);
printf("*ptr is:%d\n",*ptr);
printf("_age is:%d\n",_age);
return 0;
}

