#include "main.h"
/**
*_isalpha - controls if a character is alphabetical
*@c: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int ch)
{
if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
return (1);

return (0);
}
