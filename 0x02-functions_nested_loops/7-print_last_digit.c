#include "main.h"

/**
*print_last_dight
*@n : the num to be treated
*Return:value of last dight 
*/

int print_last_digit(int)
last = n % 10;
if (last < 0)
{
last = last * -1; 
}
_putchar(last = last * '0');
return (last);
}
