//mndfq
#include <stdio.h>

int main(){
	int i, number;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++){
		if((i%3)==0){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
