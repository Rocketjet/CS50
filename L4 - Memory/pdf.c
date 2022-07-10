#include <cs50.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, string argv[])
{
  // Check for usage
  if (argc != 2)
  {
    printf("Improper usage.\n");
    return 1;
  }

  // Open file
  FILE *pdf = fopen(argv[1], "r");

  // Create buffer for file
  uint8_t buffer[4];

  // Create array of signature bytes
  uint8_t signature[] = {0x25, 0x50, 0x44, 0x46};

  // Read first 4 bytes from file, then close.
  fread(buffer, 1, 4, pdf);
  fclose(pdf);

  // Check buffer against signature
  for (int i = 0; i < 4; i++)
  {
    if (signature[i] != buffer[i])
    {
      printf("Hm, not a PDF.\n");
      return 0;
    }
  }
  printf("Likely a PDF!\n");
  return 0;
}
