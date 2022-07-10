// Determines the length of a string

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for user's name
    string s = get_string("Name: ");

    // Count number of characters up until '\0' (aka NUL)
    int n = 0;
    while (s[n] != '\0') // \0 - місце в пам'яті наприкінці кожного створеного рядка 'string', наприклад 'Max' - займатиме в пам'яті 4 байта, а не 3, бо 4 байт займатиме спец. символ з усіх 0 - \0 . Так комп. розуміє, де закінчується string
    {
        n++;
    }
    printf("%i\n", n);
}
