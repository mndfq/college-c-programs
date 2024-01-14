//mndfq
#include <stdio.h>

int main(){
	int i, number[2], minimum;
	
	printf("Enter the first number: ");
	scanf("%d",&number[0]);
	printf("Enter the second number: ");
	scanf("%d",&number[1]);
	printf("Enter the third number: ");
	scanf("%d",&number[2]);
	
	minimum = number[0];
	
	if(number[1] < minimum){
		minimum = number[1];
	} 
	else if(number[2] < minimum){
		minimum = number[2];
	} 
	
	printf("The smallest number is : %d",minimum);
	
	return 0;
}
