//mndfq
#include <stdio.h>

int main(){
	int i, list[10], search, found = 0;
	
	printf("Enter 10 Numbers: ");
	for(i=0;i<10;i++){
	scanf("%d",&list[i]);
	}
	
	printf("Enter a number to search: ");
	scanf("%d",&search);
	
	for(i=0;i<=9;i++){
		if(search == list[i]){
			found++;
		}
	}
	
	if(found != 0){
		printf("Found it %d times !!!",found);
	}
	else{
		printf("Not Found !!!");
	}
	
	return 0;
}
