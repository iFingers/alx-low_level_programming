#include "main.h"
#include <string.h>
/**
 * rot13 - For printing rot13 of strings
 *@s: string to be converted
 *
 *Return: Rotated string
 */

char *rot13(char *s)
{
int i, len = strlen(s);

for (i = 0; i < len; i++)
{
if( (*(s + i) >= 'a' && *(s + i) <'n') || (*(s + i) >= 'A' && *(s + i) < 'N') )
{
           *(s + i) += 13;
}
	}

	return (s);
}
/*



        else if ( (*(start+i)>'m' && *(start+i)<'z') || (*(start+i)>'M' && *(start+i)<'Z') )
            *(start +i) -= 13;
    }
}
*/
