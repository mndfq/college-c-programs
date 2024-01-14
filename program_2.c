//mndfq
#include <stdio.h>

int main(){
	int number1,number2;
	
	printf("Enter the first number: ");
	scanf("%d", &number1);
	printf("\nEnter the first number: ");
	scanf("%d", &number2);	

	if(number1 < number2){
		printf("%d is smaller than %d!",number1,number2);
	}
	else if(number1 > number2){
		printf("%d is bigger than %d!",number1,number2);		
	}
	else{
		printf("Equal Numbers!!!");
	}
	
	return 0;
}
