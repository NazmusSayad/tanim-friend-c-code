#include <stdio.h>

int main() {
  // Declare variables
  int num1, num2, num3;
  int sum;
  float avg;

  // Get the first input from user
  printf("Enter fist number: ");
  scanf("%d", &num1);

  // Get the second input from user
  printf("Enter second number: ");
  scanf("%d", &num2);

  // Get the third input from user
  printf("Enter third number: ");
  scanf("%d", &num3);

  // Calculate the sum
  sum = num1 + num2 + num3;

  // Calculate the average (NOTE: the division by 3.0 to get a floating-point)
  avg = sum / 3.0;

  // Print the sum and average
  printf("Sum: %d\n", sum);
  printf("Average: %.2f\n", avg);

  return 0;
}
