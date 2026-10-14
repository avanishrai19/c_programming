#include<stdio.h>
int main()
{
	int age=22;
	int*ptr=&age;
	int  _age=*ptr;
	printf("%d",_age);// for printing the valuse of_age
	return 0;
}
