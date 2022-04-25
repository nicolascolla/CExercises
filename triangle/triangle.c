#include <stdio.h>
#include <cs50.h>

bool valid_triangle(int x, int y, int z);

int main(void)
{
    int first = get_int("First side of the triangle: ");
    int second = get_int("Second side of the triangle: ");
    int third = get_int("Third side of the triangle: ");

    bool istrue = valid_triangle(first, second, third);

    if(istrue == 0)
        printf("NOT a valid triangle!\n");
    else
        printf ("Valid triangle\n");

}

bool valid_triangle(int x, int y, int z)
{
    if(x <= 0 || y <= 0 || z <= 0)
        return false;
    else if(x + y <= z || y + z <= x || z + x <= y)
        return false;
    else
        return true;
}
