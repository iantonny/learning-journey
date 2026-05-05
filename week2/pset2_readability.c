#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // 1. Get input from user
    string text = get_string("Text: ");

    int letters = 0;
// Start at 1 because the last word isn't followed by a space
    int words = 1;
    int sentences = 0;

    // 2. Count letters, words, and sentences
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // Count letters
        if (isalpha(text[i]))
        {
            letters++;
        }
        // Count words (look for spaces)
        else if (isspace(text[i]))
        {
            words++;
        }
        // Count sentences (look for punctuation)
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    // 3. Calculate Coleman-Liau index
    // L is average letters per 100 words
    float L = (float) letters / words * 100;
    // S is average sentences per 100 words
    float S = (float) sentences / words * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

    // 4. Print the output
    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
