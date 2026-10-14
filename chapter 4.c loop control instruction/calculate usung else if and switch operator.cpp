#include<stdio.h>
int main(){

int n1,n2;
float res;
char opt;
printf("enter the operation (+,-,*,/) in calculater \n");
scanf("%c",&opt);//take a operator
if (opt == '+'){
	printf("you have selected addition\n");
	
}
else if (opt == '-')
{
	printf("you have selected subtraction\n");
	
}
else if (opt == '*')
{
	printf("you have selected multiplication\n");
} 
else if (opt == '/')
{
	printf("you have selected divide");
	
}
printf("enter the 1st num");
scanf("%d",& n1);//take 1st number
printf("enter the 2nd num");
scanf("%d", &n2);//take 2nd number

switch(opt)
{
	case'+':
		res=n1+n2;
		printf("adition of %d and %d is:%.2f,n1,n2,res\n");
		break;


    case'-':
		res=n1-n2;
			printf("subtraction of %d and %d is:%.2f,n1,n2,res\n");
		break;


	case'*':
		res=n1*n2;
			printf("multiplication of %d and %d is:%.2f,n1,n2,res\n");
			break;



	case'/':
		if(n2==0){
		
		printf("take anothe number 0 can not devide by n1\n");
		scanf("%d",&n2);}
		res=n1/n2;
			printf("devide of %d and %d is:%.2f,n1,n2,res\n");
			break;
default:("enter the valit ope");

}


return 0;

}
