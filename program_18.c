//mndfq
#include <stdio.h>

int main(){
	int i, f=1, number1, number2;
	
	printf("Enter a number :");
	scanf("%d",&number1);
	
	printf("Enter a number :");
	scanf("%d",&number2);
	
	for(i=1;i<=number2;i++){
		f*=number1;
	}
	
	printf("%d",f);

	return 0;
}
