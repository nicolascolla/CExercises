#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <cs50.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int calc_grade(string text);

int main(void)
{
    string usertext = get_string("Text: ");
    int finalgrade = calc_grade(usertext);
    if (finalgrade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (finalgrade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", finalgrade);
    }
}

// Count the letters in the string
int count_letters(string text)
{
    int letters = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        // Add 1 to 'letters' only if we find a letter
        if (isalpha(text[i]))
        {
            letters++;
        }
    }

    return letters;
}

// Count the words in the string
int count_words(string text)
{
    // (There will be a word before the first space)
    int words = 1;

    for (int i = 0; i < strlen(text); i++)
    {
        // Assume a new word comes after every space
        if (isspace(text[i]))
        {
            words++;
        }
    }

    return words;
}

// Count the sentences in the string
int count_sentences(string text)
{
    int sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        // Assume a new sentence comes after every ., ? or !
        if (text[i] == 46 || text[i] == 63 || text[i] == 33)
        {
            sentences++;
        }
    }
    
    return sentences;
}

// Calculate the grade of the text
int calc_grade(string text)
{
    float numberofletters = count_letters(text);
    float numberofwords = count_words(text);
    float numberofsentences = count_sentences(text);
    float L = numberofletters / numberofwords * (float) 100;
    float S = numberofsentences / numberofwords * (float) 100;

    float grade = 0.0588 * L - 0.296 * S - 15.8;
    int roundedgrade = round(grade);
    return roundedgrade;
}
