//mndfq
#include <stdio.h>

int main(){
    int i,side[2],result;

    printf("Enter All 3 Sides : ");
	for(i=0;i<=2;i++){
	scanf("%d",&side[i]);
	}

    result = side[0] + side[1] + side[2];

    printf("P = %d",result);

    return 0;
}