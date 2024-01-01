/*
Negative sign in the mathematical expression does cause any difference when it came across the modulus it will bahave as the normal form
*/
#include <stdio.h>
int main()
{
    float x = 4 + 2 % -8;
    printf("%f", x);
    return 0;
}
/*
Output:
6.000000
*/