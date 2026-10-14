#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr;
	int n;
	int i;
	printf("enter n number\n");
	scanf("%d",&n);
	printf("enter the number of element :%d\n",n);
	//allocating memory
	ptr=(int*)calloc(n, sizeof(int));
	if(ptr==NULL){
		printf("memory not allocated\n");
	}
	else{
		printf("memory has benn allocated successfully\n");
		//get the element of array
		for(int i=0;i<n;i++){
			ptr[i]=i+1;
			
		}
		//for printin,g the element
		for(int i=0;i<n;i++){
			printf("element are :%d\n",ptr[i]);
			
		}
	}
	free(ptr);
	
	printf("now erray is empty after using free method");
	
return 0;
}


//--------new ------>>>>>>>>


#include<stdio.h>
#include<stdlib.h>
int main(){
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);//total size of arrazy divided by size of 1 element
printf("the number of the element in arra are:%d\n",size);


for(int i=0;i<size;i++){
printf("total number  :%d\n",arr[i]);
}

return 0;}



//--------new>>>>>>>>>>>>>>>>>




