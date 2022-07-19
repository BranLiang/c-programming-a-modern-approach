#include <stdio.h>

int main(void)
{
    int area_code, num_section_1, num_section_2;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &area_code, &num_section_1, &num_section_2);

    printf("You entered %.3d.%.3d.%.4d\n", area_code, num_section_1, num_section_2);
}