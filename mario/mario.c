#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // Prompt the user. Keep asking until a non-zero value is given
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print pyramid
    for (int i = 1; i <= height; i++)
    {
        // Print spaces (total height - current number of hashes)
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        // Print hashes
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        // New line
        printf("\n");
    }
}
