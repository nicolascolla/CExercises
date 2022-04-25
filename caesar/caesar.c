#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>

bool only_digits (string argument);
char rotate(char c, int x);

int main(int argc, string argv[])
{
    // Check if the user has provided a single argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Check if the key is valid
    bool correctinput = only_digits(argv[1]);
    if (correctinput == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // If the key is valid, do your thing
    else
    {
        // Convert the command-line argument given by the user into an integer
        int key = atoi(argv[1]);

        // Prompt the user for plaintext
        string plaintext = get_string("plaintext: ");

        // Print the ciphertext
        printf("cyphertext: ");
        for (int i = 0; i < strlen(plaintext); i++)
        {
            printf("%c", rotate(plaintext[i], key));
        }
        printf("\n");

        return 0;
    }
}

// Check if the key given by the user consists exclusively of digits
bool only_digits (string argument)
{
    int b = 1;

    for (int i = 0; i < strlen(argument); i++)
    {
        bool isdigitt = isdigit(argument[i]);
        if (isdigitt == false)
        {
            b--;
        }
    }

    if (b == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Rotate character by x digits
char rotate(char c, int x)
{
    char result = 0;

    // If the character is uppercase...
    if(isupper(c))
    {
        // Subtract the ASCII value of 'A' so that A == 0
        result = c - 65;

        // Run algorithm
        result = (result + x) % 26;

        // Readd the ASCII value of 'A'
        result = result + 65;

    }
    // If the character is lowercase...
    else if (islower(c))
    {
        // Subtract the ASCII value of 'a' so that a == 0
        result = c - 97;

        // Run algorithm
        result = (result + x) % 26;

        // Readd the ASCII value of 'a'
        result = result + 97;
    }
    // If the character is neither uppercase nor lowercase (is not a letter)...
    else
    {
        // return the same character
        result = c;
    }
    return result;
}
