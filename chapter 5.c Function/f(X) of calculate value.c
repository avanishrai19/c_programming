#include<stdio.h>
// function of calculate value of 18% gst
void calculatePrise(float value);

int main(){
	float value=100;
	calculatePrise(value);
	return 0;
}
void calculatePrise(float value){
	value=value+(0.8*value);
	printf("prise is : %f",value);
}
