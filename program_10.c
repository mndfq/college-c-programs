//mndfq
#include <stdio.h>

int main(){
    int number;

    printf("Enter 1 Number: ");
    scanf("%d",&number);

    if((number % 5) == 0){
        printf("This number is divisible by 5!\n");
    }
    else{
        printf("This number is NOT divisible by 5");
    }

    return 0;
}
