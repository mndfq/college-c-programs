//mndfq
#include <stdio.h>

int main(){
	float number1,number2;
	
	printf("Enter the first number: ");
	scanf("%f",&number1);
	printf("Enter the second number: ");
	scanf("%f",&number2);	
	
	printf("\n%.0f + %.0f = %.2f",number1,number2,number1+number2);
	printf("\n%.0f - %.0f = %.2f",number1,number2,number1-number2);
	printf("\n%.0f * %.0f = %.2f",number1,number2,number1*number2);
	printf("\n%.0f / %.0f = %.2f",number1,number2,number1/number2);

	return 0;
}
