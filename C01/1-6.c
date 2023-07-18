#include <stdio.h>

main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		putchar(c);
		printf("%d\n", c != EOF);
	}
	printf("%d\n", c != EOF);
}
