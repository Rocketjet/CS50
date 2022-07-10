#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

bool check_valid_key(string s);

int main(int argc, string argv[])
{
  if (argc != 2 || !check_valid_key(argv[1])) //якщо не 2 аргумента і ключ невалідний, виводимо "Usage: ./caesar key"
  {
    printf("Usage: ./caesar key\n");
    return 1;
  }
  int key = atoi(argv[1]); // "13" --> 13

  string plaintext = get_string("plaintext: ");

  printf("ciphertext: ");
  for (int i = 0, len = strlen(plaintext); i < len; i++)
  {
    char c = plaintext[i];
    if (isalpha(c)) //**
    {
      char modifier = 'A';
      if (islower(c)) //перевірка чи символ нижнього реєстра
      {
        modifier = 'a';
      }
      printf("%c", (c - modifier + key) % 26 + modifier); //формула, яка вираховує зміщення в залежності від ключа для кожної букви
    }
    else
    {
      printf("%c", c);
    }
  }

  printf("\n");
}

bool check_valid_key(string s) //функція, яка перевіряє валідність ключа
{
  for (int i = 0, len = strlen(s); i < len; i++) //перебираємо рядок
  {
    if (!isdigit(s[i])) // якщо не число, вертаємо false
    {
      return false;
    }
  }
  return true;
}
/* In C programming, isalpha() function checks whether a character is an alphabet (a to z and A-Z) or not.

If a character passed to isalpha() is an alphabet, it returns a non-zero integer, if not it returns 0. */
