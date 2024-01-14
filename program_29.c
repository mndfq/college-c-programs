//mndfq
#include <stdio.h>

int main(){
	int c;
	float f;
	
	printf("Enter the tempreture in Celsius: ");
	scanf("%d",&c);
	
	f = (c*1.8) + 32;
	
	printf("Fahrenheit = %5.2f ",f);
	
	return 0;
}
