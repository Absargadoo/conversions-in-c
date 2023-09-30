#include <stdio.h>

int decimal_to_octal(int n) {
  // Base case.
  if (n < 2) {
    return n;
  }

  // Recursive case.
  //int remainder = n % 8;
  //int quotient = n / 8;
  return n%2 + 10 * decimal_to_octal(n/2);
}

int main() {
  int n;
  printf("enter a decimal number\n");
  scanf("%d", &n);

  // Convert the decimal number to octal.
  int octal = decimal_to_octal(n);

  // Print the octal number.
  printf("The octal value is %d.\n", octal);

  return 0;
}