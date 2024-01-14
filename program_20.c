//mndfq
#include <stdio.h>

int main(){
	int number1, number2, i;
	
	printf("Enter the first number: ");
	scanf("%d",&number1);
	
	printf("Enter the second number: ");
	scanf("%d",&number2);
	
	if(number1 < number2){
		for(i=number1;i<=number2;i++){
			printf("%d\t",i);
		}
	}
	else if(number2 < number1){
		for(i=number2;i<=number1;i++){
			printf("%d\t",i);
		}
	}
	else{
		printf("Bad Numbers!\n");
	}
	
	return 0;
}
