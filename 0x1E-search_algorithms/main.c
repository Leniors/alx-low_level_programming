#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always EXIT_SUCCESS
 *     */
int main(void) {
  int array[] = {4, 5, 6, 7, 8, 9, 10, 11, 12};
  size_t size = sizeof(array) / sizeof(array[0]);

  printf("Found %d at index: %d\n\n", 6, binary_search(array, size, 6));
  printf("Found %d at index: %d\n\n", 12, binary_search(array, size, 12));
  printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
  return (EXIT_SUCCESS);
}
