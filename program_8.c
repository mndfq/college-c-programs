//mndfq
#include <stdio.h>
#define PI 3.141592653589793238462643383279502884197169
// Use thie header on older compilers ---> #incldue <conio.h>
int main(){
    float r,result[1];
    
    printf("Enter the radius of the cirlce: ");
    scanf("%f",&r);

    result[0] = PI * r * r;
    result[1] = (r * 2) * PI;

    printf("A = %.3f",result[0]);
    printf("\nP = %.3f",result[1]);

    getchar();

    return 0;
}