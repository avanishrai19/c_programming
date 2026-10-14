#include<stdio.h>
#include<math.h>
int main(){
	double num,result;
	printf("enter a number");
	scanf("%lf",&num);
	
	//calculate the square using pow() function
	result=pow(num,2);
	
	// print the result
	printf(" %2lf\n",result);
	return 0;
}
