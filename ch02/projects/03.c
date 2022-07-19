#include <stdio.h>
#include <math.h>

int main(void)
{
    int radius;
    printf("Input the radius: ");
    scanf("%d", &radius);

    printf("%.2f\n", 4.0f / 3.0f * M_PI * radius * radius);

    return 0;
}