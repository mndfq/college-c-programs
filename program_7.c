//mndfq
#include <stdio.h>
// Use thie header on older compilers ---> #incldue <conio.h>
int main(){
    int side,result;
    
    printf("Enter 1 side of the squre: ");
    scanf("%d",&side);
    
    result = side * side ; 

    printf("A = %d",result);

    getchar();

    return 0;
}