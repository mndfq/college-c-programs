//mndfq
#include <stdio.h>

int main(){
	int i,ii,temp,number[9];
	
	printf("Enter 10 Numbers: ");
	for(i=0;i<=9;i++){
	scanf("%d",&number[i]);
	}

	for(i=0;i < 10 - 1;i++){
		for(ii=0;ii < 10 - 1;ii++){
            if(number[ii] > number[ii + 1]){
			temp = number[ii];
            number[ii] = number[ii + 1];
            number[ii + 1] = temp;
            }
		}
	}
	 
	for(i=0;i<=9;i++){
		printf("\t -%d-",number[i]);
	}
	
	return 0;
}
