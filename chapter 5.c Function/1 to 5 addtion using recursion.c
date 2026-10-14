#include<stdio.h>
// sum of  number 50 using recursion
int sum(int n);

int main(){
 printf(" sum is :%d",sum(50));
 return 0;
}
// recursive function

int sum(int n){
if(n==1){
	return 1;
}
	int sumM1=sum(n-1);
	int sumN=sumM1+n;
	return sumN;
}
