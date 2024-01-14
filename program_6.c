//mndfq
#include <stdio.h>

int main(){
    int length,width,result[1];
    
    printf("Enter the length: ");
    scanf("%d",&length);
    printf("Enter The Width: ");
    scanf("%d",&width);
    
    result[0] = length * width;
    result[1] = (length + width) * 2; 

    printf("A = %d",result[0]);
    printf("\nP = %d",result[1]);

    return 0;
}
