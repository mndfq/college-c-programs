//mndfq
#include <stdio.h>

int main(){
	int i, y, list[3][10], search, found = 0;
	
	printf("Enter 30 Numbers: ");
	for(i=0;i<2;i++){
		for(y=0;y<10;y++){
			scanf("%d",&list[i][y]);
		}
	}
	
	printf("Enter a number to search: ");
	scanf("%d",&search);
	
	for(i=0;i<=2;i++){
		for(y=0;y<=9;y++){
			if(search == list[i][y]){
				found++;
			}
		}
	}
	
	if(found != 0){
		printf("Found !!!");
	}
	else{
		printf("Not Found !!!");
	}
	
	return 0;
}
