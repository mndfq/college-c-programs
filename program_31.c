//mndfq
#include <stdio.h>

int main(){
	int i, number, mul=1, inc=0;
	
	printf("Enter your number: ");
	scanf("%d",&number);
	
	for(i=1;i<number;i++){
		inc+=i;
		mul*=i;
	}
	
	printf("Multiplication : %d \nIncrease : %d",mul,inc);
	
	return 0;
}
/*
	this one is wrong, i can feel it...
	
	
	but who cares! 
*/
