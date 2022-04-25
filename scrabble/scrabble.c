#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);
int compute_character(char x);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // Score
    int scr = 0;

    // Compute every character of the word
    for (int i = 0; i < strlen(word); i++)
    {
        scr = scr + compute_character(word[i]);
    }

    // Return the total score
    return scr;
}

int compute_character(char x)
{
    // If the character is lowercase, subtract 97 (so that a = 0, b = 1...) and return score
    if (islower(x))
    {
        x = x - 97;
        int i = x;
        return POINTS[i];
    }
    // If the character is uppercase, subtract 65 (so that A = 0, B = 1...) and return score
    else if (isupper(x))
    {
        x = x - 65;
        int i = x;
        return POINTS[i];
    }
    // If the character is neither lowercase nor uppercase, it's not a letter. Return 0
    else
    {
        return 0;
    }
}
