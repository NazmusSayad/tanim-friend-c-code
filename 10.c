#include <stdio.h>

int main() {
  int rows = 3; // Number of rows
  int cols = 4; // Number of columns

  // Declare and initialize a 2D array
  int array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  // Check if the total number of elements in the array matches rows * cols
  if (sizeof(array) == 3 * 4 * sizeof(int)) {
    printf("The array is a 2D array with %d rows and %d columns.\n", rows,
           cols);
  } else {
    printf("The array is not a 2D array.\n");
  }

  return 0;
}
