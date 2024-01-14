//mndfq
#include <stdio.h>

int main(){
	int number1,number2,result;
	
	printf("Enter the first number: ");
	scanf("%d", &number1);
	printf("\nEnter the first number: ");
	scanf("%d", &number2);	
	
	result = number1 + number2;
	
	printf("\n%d Plus %d is %d!",number1,number2,result);

	return 0;
}
