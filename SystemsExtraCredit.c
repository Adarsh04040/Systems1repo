#include <stdio.h>

int main() {
  int numArray[10] = {10, 15, 77, 23, 24, 12, 100, 17, 19, 9};
  int count = 0;
  for (int i = 0; i < 10; i++){
      count = count + numArray[i];
  };
  printf("The total of the array is %i", count);

  return 0;
}