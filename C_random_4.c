#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	int a = rand() % 3;
	printf("%d\n", a);

	return 0;
}