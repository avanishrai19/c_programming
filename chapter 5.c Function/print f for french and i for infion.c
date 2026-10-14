/******************************************************************************

                            Online C Compiler.
                Code, Copile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
void namaste();
void bonjour();//function protocall

int main()
{
	
	printf("enter f for french & i for indion ");
	char ch;
	scanf("%c",&ch);
	
	if(ch=='i'){
		namaste();  
	}
     else if(ch=='f'){
		bonjour();
		
	}
	else{
		printf("not applicable");
	}
	
	return 0;
}
void namaste()
{
	printf("namaste");
	
}
void bonjour(){
	printf("bonjour");
}
