#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_11x16(char c)
{
  c -= 0x20;
  for (char row = 0; row < 11; row++) {
    unsigned short rowBits = font_11x16[c][row];
    for (char col = 0; col < 16; col++) {
      unsigned short colMask = 1 << (15-col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}

void print_char_3x8(char c)
{
  c -= 0x20;
  for (char row = 0; row < 3; row++) {
    unsigned short rowBits = font_3x8[c][row];
    for (char col = 0; col < 8; col++) {
      unsigned short colMask = 1 << (7-col);
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}
