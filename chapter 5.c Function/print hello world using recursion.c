#include<stdio.h>
// using recursion  print hello world 5 time
void printHelloWorld(int n);

int main(){
	printHelloWorld(9);
	
	
		return 0;
}
//recursive function
void printHelloWorld(int n){
	if(n==0){
		return;
	}
	printf("Hello world\n");
	printHelloWorld(n-1);
	
}
