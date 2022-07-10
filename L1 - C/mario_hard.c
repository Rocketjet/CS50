#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int height;
  int spaces;
  int hashes;
  int hashes2;

  do
  {
    height = get_int("Height: ");
  } while (height < 1 || height > 8);

  for (int row = 1; row <= height; row++) //робимо перебір height разів
  {
    for (spaces = (height - (row)); spaces > 0; spaces--)
    { // кількість пробілів = висота - номер рядка
      printf(" ");
    }
    for (hashes = 1; hashes <= row; hashes++)
    { // кількість хешів == номеру рядка
      printf("#");
    }

    printf("  ");
    // хеші для 2 піраміди
    for (hashes2 = 1; hashes2 <= row; hashes2++)
    {
      printf("#");
    }

    printf("\n");
  }
  return 0;
}
