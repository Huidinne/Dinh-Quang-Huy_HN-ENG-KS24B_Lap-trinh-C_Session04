#include<stdio.h>
int main(){
	int number;
	printf("Nhap vao mot so: ");
	scanf("%d",&number);
	
	if(number < 0){
		printf("%d la so am",number);
	}else{
		printf("%d la so duong", number);
	}
	
}
