//mndfq
#include <stdio.h>

int main() {
    int i, number;
    printf("Enter your number: ");
    scanf("%d", &number);
    
    for (i = 1;i <= 9; i++) {
        if ((number % i) == 0) {
            printf("%d is divisible by %d!\n", number, i);
        }
    }

    return 0;
}
