/* prints a number, entered by the user, in reverse */

#include <stdio.h>

int main (void)
{
    int i, j;

    printf("Enter a two digit number: ");
    scanf("%1d%1d", &i, &j);

    printf("The reversal is: %d%d", j, i);

    return 0;
}