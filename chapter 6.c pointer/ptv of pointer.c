#include<stdio.h>
int main(){
	int age=22;
	int*ptr=&age;
	
	printf("*ptr is:%d\n",*ptr);// for printing the value of *ptr
	printf("address of *ptr is:%p\n",*ptr);// there 2 rows are writen for priinting the address of *ptr
	printf("address of *ptr is:%u\n",*ptr);
	return 0;
	
	
	
	// output is=address of *ptr=22
}
