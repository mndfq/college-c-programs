//mndfq
#include <stdio.h>

int main(){
	int i,number;
	int p = 0;
	printf("Enter a number: ");
	scanf("%d",&number);
	
	for(i = 1;i<=number;i++){
		if((number % i) == 0){
			p++;
		}
	}
	
	if(p == 2){
		printf("%d is a prime number!",number);
	}
	else{
		printf("%d is NOT a prime number!",number);	
	}

	return 0;
}
