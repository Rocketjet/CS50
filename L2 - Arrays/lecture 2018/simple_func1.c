#include <cs50.h>
#include <stdio.h>
#include <math.h>

void set_array(int array[4]); // оголошення функції
void set_int(int x);  // оголошення функції

int main(void) {
  int a = 10;
  int b[4] = {0,1,2,3};
  set_int(a); // виклик функції
  set_array(b); // виклик функції
  printf("%d %d\n", a, b[0]);
}

void set_array(int array[4]) { // визначення функції
  array[0] = 22;
}

void set_int(int x) { // визначення функції
  x = 22;
}
 //вивід 10 22
