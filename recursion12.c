#include <stdio.h>

int decimal_to_trinary(int n) {
  // Base case.
  if (n < 3) {
    return n;
  }

  // Recursive case.
  int remainder = n % 3;
  int quotient = n / 3;
  return remainder + 10 * decimal_to_trinary(quotient);
}

int main() {
  int n;
  printf("enter a number\n");
  scanf("%d",&n);

  // Convert the decimal number to trinary.
  int trinary = decimal_to_trinary(n);

  // Print the trinary number.
  printf("The trinary value is %d.\n", trinary);

  return 0;
}
