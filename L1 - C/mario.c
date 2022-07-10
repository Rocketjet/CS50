#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int height;
  do
  {
    height = get_int("Enter a value from 1 to 8: ");
  } while (height > 8 || height < 1);

  for (int row = 1; row <= height; row++)
  {
    for (int space = 1; space <= height - row; space++)
    {
      printf(" ");
    }
    for (int hash = 1; hash <= row; hash++)
    {
      printf("#");
    }
    printf("\n");
  }
}
