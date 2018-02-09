#include <stdio.h>
int main (void)
{
    double inch;
    printf("Please enter the lenth in inch.\n");
    scanf("%lf", &inch);
    double cm;
    cm = inch * 2.54;
    printf("%lf\n", cm);
    return 0;
}