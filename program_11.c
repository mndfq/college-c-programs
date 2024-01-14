//mndfq
#include <stdio.h>
int main(){
    int number;

    printf("Enter 1 Number: ");
    scanf("%d",&number);

    if((number % 2) == 0 && (number % 3) == 0){
        printf("This number is divisible by 3 & 2!\n");
    }
    else{
        printf("This number is NOT divisible by 3 & 2!");
    }

    return 0;
}
