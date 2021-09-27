#include "main.h"
/*print_alphabet_x10 - prints alphabet letters ten times*/
void print_alphabet_x10(void)
{
int number = 0;
int letter;
while (number++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar(10);
}

}
