#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "string.h"

char randBetween(char n, char m) {
	return n + rand() % (m - n + 1); //
}

void main()
{
	srand(time(NULL));
	char key[11];
	key[0] = randBetween('H', 'z');
	key[1] = randBetween('0','l');
	key[2] = 'V';
	key[3] = randBetween('f', 'z');
	key[4] = randBetween('0', '3');
	key[5] = randBetween('y', 'z');
	key[6] = randBetween('8', 'z');
	key[7] = randBetween('0', 'M');
	key[8] = randBetween(0, 1) == 0 ? randBetween('0', 'Q') : randBetween('S', 'z');
	key[9] = '2';
	key[10] = '\0';
	printf("%s\n", key);
	system("pause");
}
