#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
    // Provide usage instructions if no arguments
    if (argc < 2)
    {
        printf("Usage: ./ascii <space-separated decimal number(s)>\n");
        return 1;
    }
    else
    {
    // Convert every character to ASCII
    for (int i = 1; i < argc; i++)
    {
        int ascii = atoi(argv[i]);
        printf("%c", ascii);
    }
    // Print new line at the end
    printf("\n");
    }
}
