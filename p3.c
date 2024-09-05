#include <stdio.h>
int main()
{
    int r ,h;
    
    printf("Enter Radius of the Cylinder");
    scanf("%d", &r);
    printf("Enter Height of the Cylinder");
    scanf("%d", &h);

    printf("Area of the Cylinder with %d is %f", r, 3.14*r*r*h);
    return 0;
}