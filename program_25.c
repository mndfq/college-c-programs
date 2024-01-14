//mndfq
#include <stdio.h>

int main(){
	int i, number[10], minimum, maximum;
	
	printf("Enter 10 Numbers: ");
	for(i=0;i<10;i++){
		scanf("%d",&number[i]);
	}
	
	minimum = number[0];
	maximum = number[0];
	
	for(i=1;i<=9;i++){
		if(minimum > number[i]){
			minimum = number[i];
		} 
		else if(maximum < number[i]){
			maximum = number[i];
		} 
	}

	printf("The smallest number is : %d\n The biggest number is : %d\n",minimum, maximum);
	
	return 0;
}
