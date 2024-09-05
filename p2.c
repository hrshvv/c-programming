#include <stdio.h>
int main()
{
    int r;
    printf("Enter Radius of the Circle");
    scanf("%d", &r);

    printf("Area of the Circle with %d is %f", r, 3.14*r*r);
    return 0;
}