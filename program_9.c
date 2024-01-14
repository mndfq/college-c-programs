//mndfq
#include <stdio.h>
// Use thie header on older compilers ---> #incldue <conio.h>
int main(){
    int i,side[2],result;

    printf("Enter All 3 Sides : ");
	for(i=0;i<=2;i++){
	scanf("%d",&side[i]);
	}

    result = side[0] + side[1] + side[2];

    printf("P = %d",result);

    getchar();

    return 0;
}