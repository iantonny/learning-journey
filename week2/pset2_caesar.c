#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]);

    // 4. Get plaintext from user
    string plaintext = get_string("plaintext:  ");
    printf("ciphertext: ");

    // 5. Encrypt and print each character
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'A' + k) % 26 + 'A');
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'a' + k) % 26 + 'a');
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}
