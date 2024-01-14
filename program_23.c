//mndfq
#include <stdio.h>

int main(){
	int number, i, f = 1;
	
	printf("Enter a number less than 10 : ");
	scanf("%d",&number);
	
	if(number < 10){
		 for(i=number;i>=1;i--){
			f*=i;
		}
		printf("Factorial = %d",f);
	}
	else{
		printf("Wrong number!");
	}
	
	return 0;
}
