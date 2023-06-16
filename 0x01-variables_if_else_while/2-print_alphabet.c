#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int k;
	for (k = 0; k<26; k++){
		putchar(alp[k]);
	}
	putchar('\n');
	return (0);
}
