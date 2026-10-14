#include<stdio.h>
int main()
{
int mark;
printf("enter mark");
scanf("%d",&mark);
 if (mark>80){
    printf("passed \n");	
    printf("he got 1st devision\n");
		
	}
	else if (mark>=49){
	printf("passed but\n");
	printf("he got 2nd devision\n");
		
	}
	else if (mark<33){
	printf("he failed\n");
	printf("and he can not get in upper class\n");
	
	}
	return 0;
}
