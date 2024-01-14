//mndfq
#include <stdio.h>

int main(){
	int i,number;
	
	printf("Enter a Number: ");
	scanf("%d",&number);
	
	for(i = 0;i<=number;i++){
		if((i%2)!=0){
			printf("%d \n",i);	
		}
	}

    return 0;
}
