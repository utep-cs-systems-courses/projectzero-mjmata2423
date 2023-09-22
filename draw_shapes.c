#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints a arrow of size
void print_arrow(int size)
{
  for (int topRow = 1; topRow <= size; topRow++){
    for (int left = 1; left <= topRow; left++) putchar(' ');
    for (int right = 1; right <= topRow; right++) putchar('*');
    putchar('\n');
  }
  for (int bottomRow = size - 1; bottomRow >= 1; bottomRow--){
    for (int left = 1; left <= bottomRow; left++) putchar(' ');
    for (int right = 1; right <= bottomRow; right++) putchar('*');
    putchar('\n');
  }
}

