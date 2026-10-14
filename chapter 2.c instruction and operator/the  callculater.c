#include<stdio.h>
//the sum,multipaly,subtraction of a,b,c integer

int main()
{
	int a,b,c;
	printf("enter a");
	scanf("%d\n",&a);
	
	printf("enter b");
	scanf("%d\n",&b);
	
	printf("enter c");
	scanf("%d\n",&c);
	
	int subtract=a-b-c;
	int sum=a+b+c;
	int multipaly=a*b*c;

	
	printf("sum is:%d",sum);
	printf("multipaly:%d",multipaly);
	printf("subtract is:%d",subtract);
	return 0;
}
