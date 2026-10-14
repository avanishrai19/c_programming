#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("given num is real\n");
		
	}
	else if(num<=0)
	{
		printf("not real number");
	}
	return 0;
}
