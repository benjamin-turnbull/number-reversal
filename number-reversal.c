/* prints a number, entered by the user, in reverse */

#include <stdio.h>

int main (void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Digits reversed: ");

    do {
        printf("%d", n % 10);
        n /= 10;
    } while (n != 0);

    printf("\n");

    return 0;
}
