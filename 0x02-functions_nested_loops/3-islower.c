#include "main.h"
/**
*C Program to check the character is lowercase
*_islower - controls if a character is in lowerce
*/
int _islower(int ch)
{
if (ch >= 'a' && ch <= 'z')
return (1);

return (0);
}
