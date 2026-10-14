#include<stdio.h>
float calculateTemp(float censious);
int main(){
	float far=calculateTemp(0);
	printf("far is:%f",far);
	return 0;
}
float calculateTemp(float censious){
	float far=censious*1.8+32;
	return far;
}
