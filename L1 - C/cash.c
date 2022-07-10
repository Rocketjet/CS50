#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
  float dollars;
  do
  {
    dollars = get_float("Change owed: ");
  } while (dollars < 0); // цикл для діапазону значень  (більше 0)

  int cents = round(dollars * 100); // для округлення доларів до центів, 7.2 долара = 720 центів, наприклад

  int coins = 0; // є чотири номінала: 25, 10, 5, 1
  // 75 => 3 по 25, 0, 0, 0 - тобто сума ділиться націло
  // 41 => 41/25 => 1 монета 25, залишається 16 => 1 монета 10,
  // залишається 6 => 1 монета 5, залишається 1 => 1 монета 1, залишок 0

  while (cents != 0) // цикл перевіряє чи значення змінної != 0
  {
    // 25
    coins += cents / 25;
    cents = cents % 25;
    // 10
    coins += cents / 10;
    cents %= 10;
    // 5
    coins += cents / 5;
    cents %= 5;
    // 1
    coins += cents / 1;
    cents %= 1;
  }
  printf("%d\n", coins);
}
