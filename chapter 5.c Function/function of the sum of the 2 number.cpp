#include<stdio.h>
int addnumber(int a,int b){
	return a + b;
	
}
int main(){

	int num1,num2,sum;
	//input number 
	printf("enter two number\n");
	scanf("%d%d",&num1,&num2);
	
	// call the function
	sum=num1+num2;
	//out put and result
	printf("the sum of %d and %d is : %d\n",num1,num2,sum);
	return 0;
}
