#include <stdio.h>

int main() {
  // Declare variables
  int n;
  float sum = 0;

  // Get the input from user
  printf("Enter the value of n: ");
  scanf("%d", &n);

  // Calculate the sum
  for (int i = 1; i <= n; i++) {
    sum += i * (i + 1);
  }

  // Print the sum
  printf("The sum of the series is: %.2f\n", sum);

  return 0;
}
