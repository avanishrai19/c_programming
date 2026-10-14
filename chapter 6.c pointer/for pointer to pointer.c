#include<stdio.h>
int main()
{
	int price=100;
	int *ptr=&price;
	int **ptpr=&ptr;
	printf("**ptr is :%d\n",**ptpr);
	return 0;
}
