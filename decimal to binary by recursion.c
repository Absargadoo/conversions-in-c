#include <stdio.h>

int decimal_to_binary(int n) {
  //base case
  if (n == 0) {
    return 0;
  }

  // Recursive case.
  int remainder = n % 2;
  return remainder + 10 * decimal_to_binary(n / 2);
}

int main() {
  int n,decimal;
  printf("enter a number\n");
  scanf("%d", &n);

  // Convert the decimal number to binary.
  int binary = decimal_to_binary(n);

  // Print the binary number.
  printf("The binary value is %d.\n", binary);

  return 0;
}
